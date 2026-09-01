/* FUN_10137b70 @ 0x10137b70 */

undefined4 FUN_10137b70(int param_1,undefined4 param_2)

{
  switch(*(undefined1 *)(param_1 + 0x41)) {
  case 2:
    if (*(char *)(param_1 + 0x3d) == '\0') {
      FUN_10137768(*(undefined4 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x40));
    }
  case 1:
    FUN_101376f0(param_1);
    break;
  case 3:
  case 5:
    *(undefined1 *)(param_1 + 0x41) = 7;
    FUN_1013cbaa(param_1,param_2,20000,0);
    FUN_1013770c(*(undefined4 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x40));
    break;
  case 4:
    *(undefined1 *)(param_1 + 0x41) = 7;
    FUN_101378f0();
    break;
  default:
    return 0xffffffea;
  case 7:
  case 8:
    break;
  }
  return 0;
}

