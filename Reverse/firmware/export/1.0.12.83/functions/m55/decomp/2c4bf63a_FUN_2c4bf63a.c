/* FUN_2c4bf63a @ 0x2c4bf63a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_2c4bf63a(uint param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  uint *unaff_r5;
  uint uVar9;
  bool in_ZR;
  bool in_CY;
  
  iVar4 = _LAB_2c4bf70c;
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bf730,param_1);
  }
  if (in_ZR != false) {
    unaff_r5 = _LAB_2c4bf710;
  }
  iVar8 = _LAB_2c4bf70c + param_1 * 2;
  if (in_ZR == false) {
    unaff_r5 = _LAB_2c4bf714;
  }
  if (*(char *)(iVar8 + param_2) != '\x01') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xfd,_LAB_2c4bf720,_LAB_2c4bf71c,_LAB_2c4bf718,param_2,*(char *)(iVar8 + param_2));
  }
  *(undefined1 *)(iVar8 + param_2) = 0;
  iVar5 = _LAB_2c4bf724;
  if ((*(char *)(iVar4 + param_1 * 2) == '\0') && (*(char *)(iVar8 + 1) == '\0')) {
    uVar1 = *(undefined1 *)(param_1 * 2 + _LAB_2c4bf724 + 1);
    *unaff_r5 = *unaff_r5 & 0xfffffffe;
    iVar4 = _LAB_2c4bf728;
    FUN_2c673af8(uVar1);
    uVar2 = *(undefined1 *)(iVar5 + param_1 * 2);
    FUN_2c673af8(uVar2);
    FUN_2c673ce8(uVar1);
    FUN_2c673ce8(uVar2);
    if (*(char *)(iVar4 + param_1) == '\x01') {
      uVar9 = 1 << (param_1 & 0xff);
      func_0x2c673d08(param_1);
      pbVar6 = _LAB_2c4bf734;
      bVar3 = ~(byte)uVar9;
      *_LAB_2c4bf72c = *_LAB_2c4bf72c & bVar3;
      bVar7 = *pbVar6;
      if (uVar9 == bVar7) {
        FUN_2c4b66f4(2);
        bVar7 = *pbVar6;
      }
      *pbVar6 = bVar3 & bVar7;
    }
    *(undefined1 *)(iVar4 + param_1) = 0;
    return 0;
  }
  return 0;
}

