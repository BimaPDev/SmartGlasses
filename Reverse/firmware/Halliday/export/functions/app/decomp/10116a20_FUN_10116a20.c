/* FUN_10116a20 @ 0x10116a20 */

float FUN_10116a20(float param_1)

{
  float fVar1;
  undefined4 *puVar2;
  float fVar3;
  
  fVar3 = (float)FUN_10117358();
  fVar1 = DAT_10116a6c;
  if (((*DAT_10116a68 != -1) && (!NAN(param_1))) &&
     ((int)((uint)(param_1 < DAT_10116a6c) << 0x1f) < 0)) {
    puVar2 = (undefined4 *)thunk_FUN_10112f50();
    *puVar2 = 0x21;
    return fVar1 / fVar1;
  }
  return fVar3;
}

