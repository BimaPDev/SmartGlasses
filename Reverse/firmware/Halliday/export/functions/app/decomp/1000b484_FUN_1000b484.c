/* FUN_1000b484 @ 0x1000b484 */

void FUN_1000b484(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *DAT_1000b4cc;
  if ((*(char *)*param_1 == '\0') && (*(short *)((char *)*param_1 + 2) == 0x2902)) {
    *(undefined2 *)
     ((uint)*(ushort *)(*DAT_1000b4d0 + 0x18) * 0x1c + *(int *)(*DAT_1000b4d0 + 0x1c) + 0x18) =
         *(undefined2 *)(param_1 + 4);
    *DAT_1000b4d4 = 1;
  }
  if (*DAT_1000b4cc != iVar1) {
    FUN_1013cdc0();
  }
  return;
}

