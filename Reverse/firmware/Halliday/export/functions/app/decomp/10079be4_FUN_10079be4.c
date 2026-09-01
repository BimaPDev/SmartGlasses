/* FUN_10079be4 @ 0x10079be4 */

undefined4 FUN_10079be4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 local_1c [4];
  undefined4 local_18;
  int iStack_14;
  
  local_18 = DAT_10079c38;
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  local_1c[0] = 3;
  *puVar3 = 0x14;
  puVar3[1] = 6000;
  puVar3[0x11] = DAT_10079c3c | puVar3[0x11] & 0xf8000000;
  iStack_14 = param_1;
  FUN_1011a8ae(1);
  FUN_1011a886(3);
  iVar1 = FUN_100560c0(local_1c);
  if (iVar1 == 0) {
    thunk_FUN_101146e4(puVar3 + 4,DAT_10079c40);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffa;
  }
  return uVar2;
}

