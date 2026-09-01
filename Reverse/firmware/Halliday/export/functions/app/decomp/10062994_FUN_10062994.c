/* FUN_10062994 @ 0x10062994 */

undefined4 FUN_10062994(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    FUN_1006309c();
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_1006309c();
    param_1[1] = 0;
  }
  iVar1 = DAT_100629ec;
  if (*(int *)(DAT_100629ec + 0x34) != 0) {
    FUN_1006309c();
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  if (param_1[9] != 0) {
    FUN_1006309c();
    param_1[9] = 0;
  }
  FUN_1011c480();
  iVar1 = *DAT_100629f0;
  *DAT_100629f0 = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    FUN_100630e4(1);
    FUN_1011c2fe(0);
    FUN_1011c526();
  }
  return 0;
}

