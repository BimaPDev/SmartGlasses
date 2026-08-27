/* FUN_14094ae8 @ 0x14094ae8 */

void FUN_14094ae8(int param_1,undefined2 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 extraout_r1_00;
  int iVar4;
  undefined1 local_1f;
  undefined2 local_1e;
  uint local_1c;
  
  iVar4 = param_1 + 0x10;
  local_1c = *DAT_14094b58;
  FUN_140755e4();
  iVar1 = FUN_140e55e8(iVar4);
  if (iVar1 < 3) {
    FUN_1407561c();
    uVar2 = 1;
    uVar3 = extraout_r1_00;
  }
  else {
    local_1f = param_3;
    local_1e = param_2;
    FUN_140e53a8(iVar4,&local_1e);
    FUN_140e53a8(iVar4,&local_1f);
    FUN_1409336c(param_1);
    FUN_1407561c();
    uVar2 = 2;
    uVar3 = extraout_r1;
  }
  if ((*DAT_14094b58 ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar2,uVar3,*DAT_14094b58 ^ local_1c,0);
}

