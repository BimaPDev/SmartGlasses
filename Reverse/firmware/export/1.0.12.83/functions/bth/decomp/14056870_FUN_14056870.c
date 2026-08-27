/* FUN_14056870 @ 0x14056870 */

void FUN_14056870(int param_1,undefined2 param_2,int param_3,undefined2 param_4,undefined2 param_5)

{
  undefined1 *puVar1;
  
  if ((param_3 == 0) &&
     (puVar1 = (undefined1 *)FUN_14074378(0xe11,param_2,3,0x14), puVar1 != (undefined1 *)0x0)) {
    *(undefined2 *)(puVar1 + 2) = param_4;
    *(undefined2 *)(puVar1 + 4) = param_5;
    *puVar1 = (char)param_1;
    puVar1[1] = 1;
    FUN_140743d0();
  }
  puVar1 = (undefined1 *)FUN_14074378(0xe00,param_2,param_1 << 8 | 3,4);
  if (puVar1 == (undefined1 *)0x0) {
    return;
  }
  *puVar1 = (char)param_1;
  *(short *)(puVar1 + 2) = (short)param_3;
  puVar1[1] = 0x13;
  FUN_140743d0();
  return;
}

