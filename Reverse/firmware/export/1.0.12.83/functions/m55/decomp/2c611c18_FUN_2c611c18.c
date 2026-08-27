/* FUN_2c611c18 @ 0x2c611c18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c611c18(uint *param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  
  uVar5 = param_1[2];
  uStack_c = *_LAB_2c611d20;
  bVar3 = (byte)*param_1 & 0x1f;
  if (bVar3 == 5) {
    uVar1 = *(undefined1 *)
             (uVar5 + ((int)(short)param_3 * (int)(short)(ushort)((*param_1 << 0xb) >> 0x15) +
                      param_2) * 4 + 3);
  }
  else if (bVar3 == 0xb) {
    uVar4 = param_2 & 7;
    param_2 = (int)param_2 >> 3;
    uVar4 = 7 - uVar4;
    if ((int)((uint)*(byte *)(param_3 * ((int)(((*param_1 & 0x1fffff) >> 10) + 7) >> 3) + uVar5 +
                             param_2) & 1 << (uVar4 & 0xff)) >> (uVar4 & 0xff) == 0) {
      uVar1 = 0xff;
    }
    else {
      uVar1 = 0;
    }
  }
  else if (bVar3 == 0xc) {
    uStack_1c = _LAB_2c611d24;
    uVar4 = param_2 & 3;
    param_2 = (int)param_2 >> 2;
    uVar4 = uVar4 * -2 + 6;
    uVar1 = *(undefined1 *)
             ((int)&uStack_1c +
             ((int)((uint)*(byte *)(param_3 * ((int)(((*param_1 & 0x1fffff) >> 10) + 3) >> 2) +
                                    uVar5 + param_2) & 3 << (uVar4 & 0xff)) >> (uVar4 & 0xff)));
  }
  else if (bVar3 == 0xd) {
    iVar2 = (int)param_2 >> 1;
    uVar4 = (param_2 & 1) * -4 + 4;
    param_2 = _LAB_2c611d28[1];
    uStack_1c = *_LAB_2c611d28;
    uStack_18 = param_2;
    uStack_14 = _LAB_2c611d28[2];
    uStack_10 = _LAB_2c611d28[3];
    uVar1 = *(undefined1 *)
             ((int)&uStack_1c +
             ((int)((uint)*(byte *)(param_3 * ((int)(((*param_1 & 0x1fffff) >> 10) + 1) >> 1) +
                                    uVar5 + iVar2) & 0xf << (uVar4 & 0xff)) >> (uVar4 & 0xff)));
  }
  else if (bVar3 == 0xe) {
    uVar1 = *(undefined1 *)
             (uVar5 + (int)(short)param_3 * (int)(short)(ushort)((*param_1 << 0xb) >> 0x15) +
                      param_2);
  }
  else {
    uVar1 = 0xff;
  }
  uVar5 = *_LAB_2c611d20 ^ *_LAB_2c611d20;
  if (uVar5 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar1,param_2,uVar5,0);
}

