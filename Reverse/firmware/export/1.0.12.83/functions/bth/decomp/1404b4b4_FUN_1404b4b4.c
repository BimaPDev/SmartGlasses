/* FUN_1404b4b4 @ 0x1404b4b4 */

void FUN_1404b4b4(undefined1 *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 unaff_lr;
  
  if ((param_1 == (undefined1 *)0x0) || (*(char *)(DAT_1404b518 + 6) == '\0')) {
    cVar2 = -1;
  }
  else {
    iVar1 = FUN_140db784(param_1,DAT_1404b518,6);
    cVar2 = -(iVar1 != 0);
  }
  FUN_1402a6e8(4,0x1287,DAT_1404b528,DAT_1404b524,DAT_1404b520,cVar2,DAT_1404b51c,*param_1,
               param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
  iVar1 = DAT_1404b498;
  if (cVar2 == '\0') {
    FUN_1402a6e8(4,0x127b,DAT_1404b4a8,DAT_1404b4a4,DAT_1404b4a0,0,DAT_1404b49c,
                 *(undefined4 *)(DAT_1404b498 + 0xc));
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_14048588(*(undefined2 *)(iVar1 + 8));
      return;
    }
  }
  else {
    FUN_1402a6e8(4,0x5b1,DAT_1404b4a8,DAT_1404b4a4,DAT_1404b4b0,DAT_1404b4ac,cVar2,unaff_lr);
    FUN_1402a6e8(4,0x127b,DAT_1404b4a8,DAT_1404b4a4,DAT_1404b4a0,cVar2,DAT_1404b49c,0);
  }
  return;
}

