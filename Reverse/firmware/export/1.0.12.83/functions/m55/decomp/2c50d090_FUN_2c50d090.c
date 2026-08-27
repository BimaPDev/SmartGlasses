/* FUN_2c50d090 @ 0x2c50d090 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c50d090(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  
  iVar3 = *_LAB_2c50d19c;
  iVar1 = FUN_2c602618(param_2,param_2,param_3,0);
  if (iVar1 == 0xd2) {
    iVar1 = 1;
    FUN_2c50cf90(param_1);
  }
  else if (iVar1 == 0xd3) {
    iVar1 = FUN_2c606b94(param_1[8],1);
    if (iVar1 == 0) {
      piVar5 = (int *)param_1[1];
      iVar1 = 1;
      pcVar6 = *(code **)*piVar5;
      uVar2 = (*(code *)((undefined4 *)*piVar5)[0xc])(piVar5);
      (*pcVar6)(piVar5,uVar2);
    }
    else {
      (**(code **)(*param_1 + 0x10))(param_1);
      iVar4 = *param_1;
      if (*(code **)(iVar4 + 0x38) != _LAB_2c50d1a0) {
        (**(code **)(iVar4 + 0x38))(param_1);
        iVar4 = *param_1;
      }
      (**(code **)(iVar4 + 0x34))(param_1);
      (**(code **)(*param_1 + 0xc))(param_1);
    }
  }
  else {
    if (iVar1 == 0xce) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x108,_DAT_2c50d1ac,_LAB_2c50d1a8,_LAB_2c50d1a4);
    }
    if (iVar1 == 0xe3 || iVar1 == 0xd4) {
      iVar1 = 1;
      (**(code **)(*(int *)param_1[1] + 0x44))();
    }
    else {
      iVar1 = 0;
    }
  }
  if (*_LAB_2c50d19c != iVar3) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar1;
}

