/* FUN_101165e0 @ 0x101165e0 */

undefined4 FUN_101165e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    FUN_10119dc2(DAT_10116634,DAT_10116630,DAT_1011662c,0x94,0,param_2);
    FUN_10119dc2(DAT_10116638);
    FUN_1011a1f0(DAT_1011662c,0x94,param_3,param_4);
  }
  piVar1 = (int *)(*(int *)(DAT_1011663c + 8) + 0xa8);
  piVar2 = (int *)*piVar1;
  if (piVar2 != piVar1) {
    for (; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      if ((int *)param_1 == piVar2) {
        return 1;
      }
      if (piVar2 == (int *)*(int *)(*(int *)(DAT_1011663c + 8) + 0xac)) {
        return 0;
      }
    }
  }
  return 0;
}

