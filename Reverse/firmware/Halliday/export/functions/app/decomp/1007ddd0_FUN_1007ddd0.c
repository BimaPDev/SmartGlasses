/* FUN_1007ddd0 @ 0x1007ddd0 */

undefined4 FUN_1007ddd0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)*param_1;
  if (iVar1 == DAT_1007ddf8) {
    return 0;
  }
  if (iVar1 == DAT_1007ddf8 + 0x4000) {
    return 1;
  }
  if (iVar1 == DAT_1007ddf8 + 0x8000) {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}

