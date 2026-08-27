/* FUN_14001c8c @ 0x14001c8c */

void FUN_14001c8c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    FUN_14001554();
    FUN_14001520(param_1,*(undefined1 *)
                          (*(int *)(DAT_14001d08 + (uint)*(byte *)(DAT_14001d04 + param_1) * 4) + 5)
                );
LAB_14001ca8:
    FUN_1400175c(param_1);
    return;
  }
  FUN_1400153c();
  FUN_14001520(param_1,*(undefined1 *)
                        (*(int *)(DAT_14001d08 + (uint)*(byte *)(DAT_14001d04 + param_1) * 4) + 6));
  iVar1 = *(int *)(DAT_14001d0c + param_1 * 4);
  if (iVar1 << 0x1a < 0) {
    uVar2 = 0xeb;
  }
  else {
    if (-1 < iVar1 << 0x1c) goto LAB_14001ca8;
    uVar2 = 0xbb;
  }
  FUN_14001798(param_1);
  FUN_1400166c(param_1,2);
  FUN_1400168c(param_1,uVar2,0);
  FUN_14001798(param_1);
  FUN_1400175c(param_1);
  return;
}

