/* FUN_1012d7f2 @ 0x1012d7f2 */

undefined4 FUN_1012d7f2(char *param_1)

{
  if (((param_1 != (char *)0x0) && (*param_1 == 'U')) &&
     (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0)) {
    return **(undefined4 **)(param_1 + 0x54);
  }
  return 0;
}

