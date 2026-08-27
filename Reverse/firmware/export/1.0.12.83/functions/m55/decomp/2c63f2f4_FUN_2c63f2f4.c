/* FUN_2c63f2f4 @ 0x2c63f2f4 */

int FUN_2c63f2f4(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = *DAT_2c63f414;
  iVar2 = FUN_2c6411ac();
  iVar3 = 0;
  if (iVar2 != 0) {
    if (3 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c63f424,0x350,DAT_2c63f420,DAT_2c63f41c,param_2);
    }
    iVar3 = FUN_2c63ed48(param_2,&local_3c,1);
    if (iVar3 != 0) {
      local_28 = local_3c;
      uStack_24 = uStack_38;
      uStack_20 = uStack_34;
      uStack_1c = uStack_30;
      local_18 = local_2c;
      if (param_1 == 0) {
        cVar1 = FUN_2c48f380();
      }
      else {
        cVar1 = FUN_2c48f2d4(local_3c & 0xff);
      }
      if (cVar1 < '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c63f424,0x35e,DAT_2c63f420,DAT_2c63f43c,param_2,param_1,1);
      }
      local_2c = CONCAT31(local_2c._1_3_,(char)param_1);
      FUN_2c64078c(DAT_2c63f418);
      iVar2 = FUN_2c640a50();
      if (iVar2 == 0) {
        FUN_2c6411e0();
        iVar2 = FUN_2c63e140();
        if (iVar2 != 0) {
          FUN_2c63dc4c(0,1);
        }
        iVar2 = FUN_2c640b70(&local_3c,0);
        if (iVar2 == 0) goto LAB_2c63f372;
      }
      FUN_2c640a6c(&local_3c,&local_28);
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c63f424,0xc5,DAT_2c63f42c,DAT_2c63f428,0);
    }
  }
LAB_2c63f372:
  if (*DAT_2c63f414 == local_14) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

