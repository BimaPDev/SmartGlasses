/* FUN_2c5ef930 @ 0x2c5ef930 */

void FUN_2c5ef930(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_r1;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined1 auStack_ac [152];
  uint local_14;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  local_14 = *DAT_2c5ef99c;
  uVar2 = param_2;
  if (iVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (((*(char *)(iVar3 + 0xc) != '\0') && (uVar1 = (uint)*(byte *)(param_1 + 0x17), uVar1 != 0))
       && (*(undefined1 *)(param_1 + 0x17) = 0, param_2 != 0)) {
      *(undefined1 *)(iVar3 + 0xc) = 0;
      uVar2 = 0;
      if (*(int *)(param_1 + 0x18) != 0) {
        local_b0 = FUN_2c6435c4(auStack_ac);
        local_b8 = *(undefined4 *)(iVar3 + 4);
        uStack_b4 = *(undefined4 *)(iVar3 + 8);
        uVar4 = FUN_2c5ee9d4(&local_b8);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
        uVar1 = param_2;
        if ((int)uVar4 != 0) {
          FUN_2c5ee9ac(param_1 + 0x20);
          uVar2 = extraout_r1;
        }
      }
    }
  }
  if ((*DAT_2c5ef99c ^ local_14) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar1,uVar2,*DAT_2c5ef99c ^ local_14,0);
  }
  return;
}

