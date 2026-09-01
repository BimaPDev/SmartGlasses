/* FUN_101169b8 @ 0x101169b8 */

undefined4 FUN_101169b8(float param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float extraout_s0;
  
  uVar1 = FUN_10116eac();
  if ((*DAT_10116a18 != -1) && (!NAN(param_1))) {
    uVar1 = FUN_1011679c(param_1);
    if (1.0 < extraout_s0) {
      puVar2 = (undefined4 *)thunk_FUN_10112f50();
      uVar1 = DAT_10116a1c;
      *puVar2 = 0x21;
      return uVar1;
    }
  }
  return uVar1;
}

