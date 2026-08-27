/* FUN_2c017548 @ 0x2c017548 */

void FUN_2c017548(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint local_1c;
  uint local_18;
  int local_14;
  
  local_14 = *DAT_2c017608;
  local_18 = local_18 & 0xffffff00;
  local_1c = param_2;
  FUN_2c0174bc(param_1,&local_18,0);
  iVar1 = FUN_2c017504(local_18 & 0xff);
  if ((iVar1 - 1U & param_2) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00dfac(DAT_2c017610,DAT_2c01760c,param_2);
  }
  iVar2 = FUN_2c01747c(param_1,&local_1c);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00dfac(DAT_2c017618,DAT_2c01760c,iVar2);
  }
  local_1c = local_1c + param_2;
  iVar2 = FUN_2c016c10(param_1,local_1c,iVar1,1);
  while (iVar2 != 0) {
    if (iVar2 != 1) goto LAB_2c0175e6;
    while( true ) {
      thunk_FUN_2c016438();
      iVar2 = FUN_2c017408(param_1,2);
      if (iVar2 == 0) break;
      FUN_2c0185bc(10);
    }
    iVar2 = FUN_2c016c10(param_1,local_1c,iVar1,1);
  }
  if (*DAT_2c017608 == local_14) {
    return;
  }
  FUN_2c00a1f8();
LAB_2c0175e6:
  FUN_2c01747c(param_1,&local_18);
                    /* WARNING: Subroutine does not return */
  FUN_2c00dfac(DAT_2c017614,DAT_2c01760c,iVar2,local_1c,local_18);
}

