/* FUN_10125ab8 @ 0x10125ab8 */

void FUN_10125ab8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_1008af34();
  iVar1 = FUN_10086d7c();
  if (iVar1 != 0) {
    local_20 = *param_2;
    local_1c = param_2[1];
    local_18 = param_2[2];
    local_14 = param_2[3];
    iVar1 = FUN_101259d0(param_1,&local_20);
    if (iVar1 != 0) {
      uVar2 = FUN_1008af34(param_1);
      FUN_1008b9e4(uVar2,&local_20);
    }
  }
  return;
}

