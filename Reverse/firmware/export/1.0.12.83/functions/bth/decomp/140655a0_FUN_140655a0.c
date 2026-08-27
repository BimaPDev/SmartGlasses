/* FUN_140655a0 @ 0x140655a0 */

void FUN_140655a0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5,int param_6,char param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  int local_34;
  undefined4 local_30;
  uint local_2c;
  
  param_1 = param_1 & 3;
  local_2c = *DAT_14065664;
  if ((param_1 == 0) || (param_6 == 0)) {
    iVar4 = 0x40;
  }
  else {
    local_30 = param_1;
    do {
      bVar1 = (byte)local_30;
      bVar2 = (byte)(local_30 >> 8);
      bVar3 = (byte)(local_30 >> 0x10);
      bVar5 = (byte)(local_30 >> 0x18);
      uVar6 = LZCOUNT((uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1)
                                       << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                    bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7) <<
                      0x18 | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                              bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                            bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x10 |
                      (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                       << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                    bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 8 |
                      (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1)
                                       << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                    bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7));
      *(byte *)((int)&local_30 + (uVar6 >> 3)) =
           *(byte *)((int)&local_30 + (uVar6 >> 3)) & ~(byte)(1 << (uVar6 & 7));
      if (*(int *)(DAT_14065668 + (uVar6 + 0x22) * 4) == 0) {
        iVar4 = 0x43;
        goto LAB_14065646;
      }
    } while (local_30 != 0);
    local_30 = CONCAT22(*(undefined2 *)(param_6 + 4),param_5);
    uVar7 = FUN_14064e94(LZCOUNT((uint)(byte)((((byte)param_1 & 1) << 1 | (byte)param_1 >> 1) << 6)
                                 << 0x18));
    param_2 = (undefined4)((ulonglong)uVar7 >> 0x20);
    iVar4 = (int)uVar7;
    if (iVar4 == 0) {
      *(uint *)(local_34 + 0x28) = param_1;
      bVar5 = *(byte *)(local_34 + 0x34) & 0xfb;
      if (param_7 != '\0') {
        bVar5 = bVar5 | 4;
      }
      *(byte *)(local_34 + 0x34) = bVar5;
    }
  }
LAB_14065646:
  if ((*DAT_14065664 ^ local_2c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(iVar4,param_2,*DAT_14065664 ^ local_2c,0);
}

