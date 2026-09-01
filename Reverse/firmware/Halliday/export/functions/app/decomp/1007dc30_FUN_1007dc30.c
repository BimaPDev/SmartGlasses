/* FUN_1007dc30 @ 0x1007dc30 */

undefined4 FUN_1007dc30(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  FUN_1007e74c();
  if (*(code **)(*param_1 + 0x25) != (code *)0x0) {
    (**(code **)(*param_1 + 0x25))(param_1);
  }
  iVar1 = FUN_1007da4c(param_1);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_100808b4(param_1);
    if (iVar1 == 1) {
      thunk_FUN_10120f92(param_1);
      FUN_10121a00(param_1,0);
      FUN_1007dbdc(param_1,0);
      if (*(code **)(*param_1 + 0x19) == (code *)0x0) {
        return 0;
      }
      (**(code **)(*param_1 + 0x19))(param_1);
      return 0;
    }
    if ((*(char *)(*param_1 + 0x10) != '\0') &&
       (pcVar2 = *(code **)(*param_1 + 0xc), pcVar2 != (code *)0x0)) {
      (*pcVar2)(DAT_1007dca4,DAT_1007dca0,0xd7,pcVar2,param_4);
    }
  }
  return 0xffffffff;
}

