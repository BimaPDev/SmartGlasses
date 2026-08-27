/* FUN_1405ba0c @ 0x1405ba0c */

void FUN_1405ba0c(uint param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  uint local_20;
  int local_1c;
  
  iVar1 = DAT_1405bb2c;
  local_1c = *DAT_1405bb30;
  *(undefined2 *)(DAT_1405bb2c + 0x28) = param_3;
  *(undefined2 *)(iVar1 + 0x26) = param_2;
  uVar5 = *(byte *)(iVar1 + 0x50) & 0x7c | (param_1 & 0x7f) >> 6 |
          ((int)(param_1 << 0x10) >> 0x1f) << 7 | param_1 >> 9 & 2;
  bVar6 = (int)(param_1 << 0x19) < 0;
  *(char *)(iVar1 + 0x50) = (char)uVar5;
  if (bVar6) {
    uVar5 = 0x19f;
  }
  local_20 = 0x1f;
  if (bVar6) {
    local_20 = uVar5;
  }
  if ((int)(param_1 << 0x15) < 0) {
    local_20 = local_20 | 0x60;
  }
  if (param_4 != 0) {
    local_20 = local_20 | 0x600;
  }
  iVar3 = FUN_140692a4();
  if (((((iVar3 == 0) &&
        (iVar4 = FUN_14066034(0x17,0xff,DAT_1405bb38,DAT_1405bb34), iVar2 = DAT_1405bb40,
        iVar3 = DAT_1405bb3c, iVar4 == 0)) &&
       (iVar4 = FUN_14066adc(*(undefined1 *)(iVar1 + 0x2d),0,0x1800,0xb,&local_20,
                             DAT_1405bb3c + 0x30,0xb,DAT_1405bb40), iVar4 == 0)) &&
      ((iVar3 = FUN_14066adc(*(undefined1 *)(iVar1 + 0x2d),0,0x1801,8,0,iVar3,8,iVar2 + 2),
       iVar3 == 0 &&
       (((param_1 & 0x38) == 0 ||
        (iVar3 = FUN_14067314(*(undefined1 *)(iVar1 + 0x2d),*(short *)(iVar1 + 0x26) + 4,
                              (((param_1 & 0x3f) >> 3) - 1) * 0x400 & 0xc00 | 10), iVar3 == 0))))))
     && ((param_1 & 7) != 0)) {
    FUN_14067314(*(undefined1 *)(iVar1 + 0x2d),*(short *)(iVar1 + 0x26) + 2,
                 ((param_1 & 7) - 1) * 0x400 & 0xc00 | 10);
  }
  if (*DAT_1405bb30 != local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

