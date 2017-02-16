# -*- coding: utf-8 -*-
__author__ = 'suhorukov'

"""
При парсинге карт для М74 мы отваливаемся на "Маска DTC". Индекс типа калировки - 0х06. Надо установить размер этой
калибровки в карте, чтобы можно было спокойно распарсить карту дальше

Так же в конце карт содержится HTML код для комментариев. Как вариант можно ими тоже заняться, чтобы отделить лишний
мусор, либо определить начало данной информации и ручками из карт поудалять комментарии
"""


import sys
import locale

buffer = []

def init_buffer():
    # buffer.clear()
    # file_name = "old.j4"
    # file_name = "new.j4"
    # file_name = "new.m73"
    file_name = "M74_typeI.m74"
    # file_name = "test.m75"
    # file_name = "test.mt80"
    bytes_read = open(file_name, 'rb').read()
    for b in bytes_read:
        buffer.append(ord(b))


def get_string(address, offset):
    result = ""
    for i in range(address + offset, address + offset + buffer[address + offset - 1]):
        c = buffer[i]

        result += chr(c)

    return result


# CTP v3
def get_name(fl_type, address):

    # if (fl_type == 0x00) or (fl_type == 0x01) or (fl_type == 0x02):
    name = get_string(address, 0x1)
    value = str(fl_type) + ': ' + name.encode('cp1252').decode('cp1251')
    print(value)


def get_DWORD_v3(address, xored = False):
    XorConstant = 0x28A6FBB8

    WW = buffer[address + 3]
    WW = WW << 8
    WW = WW | buffer[address + 2]
    WW = WW << 8
    WW = WW | buffer[address + 1]
    WW = WW << 8
    WW = WW | buffer[address]
    if xored == True:
        return WW ^ XorConstant
    else:
        return WW


def get_DOUBLE_v3(address):
    n = int(0)
    WW = int(0)
    B = bytearray()
    for n in range(0, 7):
        bt = buffer[address + n]
        B.insert(n, bt)
        # B.append(buffer[address + n])
        # B.__add__()[n] = buffer[address + n]

    return int.from_bytes(B, byteorder='big')



def create_map_item_v3(fl_type, tmp):
    iFolder = 0x00
    iTable1D = 0x03
    iTable2D = 0x01
    iTable3D = 0x02
    iBytes = 0x04
    iStrings = 0x05
    iDTC = 0x06
    _address = tmp

    if (fl_type == iTable1D) or (fl_type == iTable2D) or (fl_type == iTable3D)\
            or (fl_type == iBytes) or (fl_type == iStrings) or (fl_type == iDTC):
        name = get_string(_address, 0x01).encode('cp1252').decode('cp1251')
        print(str(fl_type) + ': ' + name)
        _address += 0x45
        # measure = get_string(_address, 0x11).encode('cp1252').decode('cp1251')
        # print('    ??. ???.: ' + measure)
        map_address = get_DWORD_v3(_address + 0x4, True)
        print('    ????? ??????????: ' + hex(map_address))
        # min_value = get_DOUBLE_v3(_address + 0x21)
        # print('    ???.: ' + str(min_value))
        # max_value = get_DOUBLE_v3(_address + 0x29)
        # print('    ????.: ' + str(max_value))
        # value_type = buffer[_address + 0x31]
        # print('    ??? ??????: ' + str(value_type))
        # divider = get_DOUBLE_v3(_address + 0x33)
        # print('    ????????: ' + str(divider))
        # forward_bias = get_DOUBLE_v3(_address + 0x3B)
        # print('    ????????????? ????????: ' + str(forward_bias))
        # multiplicative = get_DOUBLE_v3(_address + 0x43)
        # print('    ?????????: ' + str(multiplicative))
        # step = get_DOUBLE_v3(_address + 0x4B)
        # print('    ???: ' + str(step))
        # backward_bias = get_DOUBLE_v3(_address + 0x53)
        # print('    ????????????? ????????: ' + str(backward_bias))
        pass




def load_v3():
    cnt = int(0)
    Db_bl = int(0)
    Tmp = int(0)
    Ntr = int(0)
    fl_type = int(0)
    t48 = int(0)

    buffer_size = len(buffer)
    fl_type = 0xFF
    Db_bl = 0x16

    while Db_bl < (buffer_size - 2):
        Tmp = Db_bl
        if fl_type == 0xFF:
            fl_type = buffer[Tmp + 0x42]
            Db_bl += 0x43
            t48 = buffer[Tmp + 0x41]
            Ntr = t48
            if t48 <= Ntr:
                pass
                # print('parent found')

            create_map_item_v3(fl_type, Tmp)
            # get_name(fl_type, Tmp)
            cnt += 1
            Tmp = Db_bl

        if (fl_type == 0x00) and (Tmp < (buffer_size - 0x45)):
            Db_bl += 0x45
            fl_type = buffer[Tmp + 0x44]
            t48 = buffer[Tmp + 0x43]
            Ntr = t48
            if t48 <= Ntr:
                pass
                # print('some one parent found')

            create_map_item_v3(fl_type, Tmp + 0x02)
            # get_name(fl_type, Tmp + 2)
            cnt += 1
            # print(cnt)
        else:
            if fl_type == 0x01:
                Db_bl += 0x1AE + 2

            if fl_type == 0x02:
                Db_bl += 0x2e2 + 2

            if fl_type == 0x03:
                Db_bl += 0x65 + 2

            if fl_type == 0x04:
                Db_bl += 0x1286 + 2

            if fl_type == 0x05:
                Db_bl += 0x28F + 2

            fl_type = 0xFF


# CTP v7
def get_name_v7(fl_type, address):

    # print(fl_type)
    name = get_string(address, 0x1)
    value = str(fl_type) + ': ' + name.encode('cp1252').decode('cp1251')
    print(value)
    # if (fl_type == 0x00) or (fl_type == 0x01) or (fl_type == 0x02):
    #     name = get_string(address, 0x1)
    #     print(name.encode('cp1252').decode('cp1251'))
        # Text2 = name.encode('utf8')
        # sys.stdout.buffer.write(Text2)

        # print(str(name))


def create_map_item_v7(fl_type, tmp):
    iFolder = 0x00
    iTable1D = 0x03
    iTable2D = 0x01
    iTable3D = 0x02
    iBytes = 0x04
    iStrings = 0x05
    iDTC = 0x06
    _address = tmp

    if (fl_type == iTable1D) or (fl_type == iTable2D) or (fl_type == iTable3D)\
            or (fl_type == iBytes) or (fl_type == iStrings) or (fl_type == iDTC):
        name = get_string(_address, 0x01).decode('cp1251')
        print(str(fl_type) + ': ' + name)
        _address += 0x4A
        # measure = get_string(_address, 0x76).encode('cp1252').decode('cp1251')
        # print('    ??. ???.: ' + measure)
        map_address = get_DWORD_v3(_address + 0x7, False)
        print(u'    Адрес калибровки: ' + hex(map_address))
        # min_value = get_DOUBLE_v3(_address + 0x21 + 0x66)
        # print('    ???.: ' + str(min_value))
        # max_value = get_DOUBLE_v3(_address + 0x29 + 0x66)
        # print('    ????.: ' + str(max_value))
        # value_type = buffer[_address + 0x31 + 0x66]
        # print('    ??? ??????: ' + str(value_type))
        # divider = get_DOUBLE_v3(_address + 0x33 + 0x66)
        # print('    ????????: ' + str(divider))
        # forward_bias = get_DOUBLE_v3(_address + 0x3B + 0x66)
        # print('    ????????????? ????????: ' + str(forward_bias))
        # multiplicative = get_DOUBLE_v3(_address + 0x43 + 0x66)
        # print('    ?????????: ' + str(multiplicative))
        # step = get_DOUBLE_v3(_address + 0x4B + 0x66)
        # print('    ???: ' + str(step))
        # backward_bias = get_DOUBLE_v3(_address + 0x53 + 0x66)
        # print('    ????????????? ????????: ' + str(backward_bias))
        pass

def load_v7():
    cnt = int(0)
    Db_bl = int(0)
    Tmp = int(0)
    Ntr = int(0)
    fl_type = int(0)
    t48 = int(0)

    buffer_size = len(buffer)
    fl_type = 0xFF
    Db_bl = 0x39

    while Db_bl < (buffer_size - 2):
        Tmp = Db_bl
        if fl_type == 0xFF:
            fl_type = buffer[Tmp + 0x49]
            Db_bl += 0x43
            t48 = buffer[Tmp + 0x48]
            Ntr = t48
            if t48 <= Ntr:
                pass
                # print('parent found')

            # get_name_v7(fl_type, Tmp)
            create_map_item_v7(fl_type, Tmp)
            cnt += 1
            # print(cnt)
            Tmp = Db_bl
            # Tmp = Db_bl + 7
        # else:
            # Tmp = Db_bl + 7
            # Tmp = Db_bl + 7

        if (fl_type == 0x00) and (Tmp < (buffer_size - 0x50)):

            # Tmp += 7

            Db_bl += 0x50
            fl_type = buffer[Tmp + 0x56]
            t48 = buffer[Tmp + 0x55]
            Ntr = t48
            if t48 <= Ntr:
                pass
                # print('some one parent found')

            # get_name_v7(fl_type, Tmp + 0x0d)
            create_map_item_v7(fl_type, Tmp + 0x0d)
            cnt += 1
            # print(cnt)
        else:
            if fl_type == 0x01:
                Db_bl += 0x192 + 2

            if fl_type == 0x02:
                Db_bl += 0x25D + 2

            if fl_type == 0x03:
                Db_bl += 0xC6 + 2

            if fl_type == 0x04:
                Db_bl += 0x1249 + 2

            if fl_type == 0x05:
                Db_bl += 0x291 + 2

            if fl_type == 0x06:
                Db_bl += 0x34 + 2

            fl_type = 0xFF

init_buffer()
# load_v3()
load_v7()
pass
