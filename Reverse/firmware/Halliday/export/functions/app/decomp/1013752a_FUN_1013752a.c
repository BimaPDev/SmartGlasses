/* FUN_1013752a @ 0x1013752a */

undefined4 FUN_1013752a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    iVar1 = FUN_100de004(0,1,0,param_1 + 0xe8);
    if (iVar1 != 0) {
      uVar2 = FUN_100ddd34(param_1,iVar1);
      return uVar2;
    }
    uVar2 = 0xfffffff4;
  }
  return uVar2;
}

