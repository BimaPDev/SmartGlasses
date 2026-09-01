/* FUN_1011d312 @ 0x1011d312 */

undefined4 FUN_1011d312(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [36];
  
  iVar3 = (int)*param_2;
  iVar1 = FUN_1011cf46();
  if (iVar1 == 0) {
    iVar1 = FUN_1011c930(param_2 + 4,param_1,iVar3);
    if ((iVar1 == 1) &&
       (uVar4 = FUN_1011c930(param_2 + 4,param_1 + iVar3 * 4,iVar3), (int)uVar4 == 1)) {
      FUN_1011cb6c(auStack_58,(int)((ulonglong)uVar4 >> 0x20),param_2);
      (**(code **)(param_2 + 0xa8))(auStack_38,param_1,param_2);
      iVar1 = FUN_1011c95e(auStack_58,auStack_38,iVar3);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0xfffffffd;
      }
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

