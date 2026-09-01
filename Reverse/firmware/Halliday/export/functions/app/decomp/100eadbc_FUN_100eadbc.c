/* FUN_100eadbc @ 0x100eadbc */

undefined4 FUN_100eadbc(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_100eadfc;
  if (*DAT_100eadfc != param_1) {
    piVar2 = (int *)0x0;
    while (piVar2 = (int *)FUN_10093034(piVar2), piVar2 != (int *)0x0) {
      if (param_2 == 0) {
        FUN_1012471a(piVar2);
      }
      else {
        FUN_1008765c(piVar2,0);
      }
      *(int *)(*piVar2 + 0x10) = param_1;
    }
    FUN_10092ef8(param_1);
    *piVar1 = param_1;
  }
  return 0;
}

