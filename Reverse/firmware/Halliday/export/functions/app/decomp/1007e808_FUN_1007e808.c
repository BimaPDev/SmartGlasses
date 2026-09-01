/* FUN_1007e808 @ 0x1007e808 */

void FUN_1007e808(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = param_1[3];
  if ((2 < *(byte *)(*param_1 + 0x10)) &&
     (pcVar1 = *(code **)(*param_1 + 0xc), pcVar1 != (code *)0x0)) {
    (*pcVar1)(DAT_1007e8c8,DAT_1007e8c4,9,pcVar1,param_1,param_2);
  }
  if ((2 < *(byte *)(*param_1 + 0x10)) &&
     (pcVar1 = *(code **)(*param_1 + 0xc), pcVar1 != (code *)0x0)) {
    (*pcVar1)(DAT_1007e8cc,DAT_1007e8c4,0xb);
  }
  FUN_1007dca8(param_1,*(undefined4 *)(*(int *)(iVar2 + 0x74) + 8),
               (uint)*(ushort *)(iVar2 + 0xc0) << 1,0,1);
  if ((2 < *(byte *)(*param_1 + 0x10)) &&
     (pcVar1 = *(code **)(*param_1 + 0xc), pcVar1 != (code *)0x0)) {
    (*pcVar1)(DAT_1007e8d0,DAT_1007e8c4,0xe);
  }
  FUN_1007dca8(param_1,*(undefined4 *)(*(int *)(iVar2 + 0x74) + 0x10),
               ((*(ushort *)(iVar2 + 0x10da) - 1) - (uint)*(ushort *)(iVar2 + 0xc0)) * 2,0,1);
  if ((2 < *(byte *)(*param_1 + 0x10)) &&
     (pcVar1 = *(code **)(*param_1 + 0xc), pcVar1 != (code *)0x0)) {
    (*pcVar1)(DAT_1007e8d4,DAT_1007e8c4,0x11,*(undefined4 *)(*(int *)(iVar2 + 0x74) + 0x10));
  }
  if ((2 < *(byte *)(*param_1 + 0x10)) &&
     (pcVar1 = *(code **)(*param_1 + 0xc), pcVar1 != (code *)0x0)) {
    (*pcVar1)(DAT_1007e8d8,DAT_1007e8c4,0x13);
  }
  FUN_1007dca8(param_1,*(undefined4 *)(*(int *)(iVar2 + 0x74) + 0xc),0x40,0,1);
  return;
}

