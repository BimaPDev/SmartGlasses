/* FUN_100f1bbc @ 0x100f1bbc */

void FUN_100f1bbc(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined2 uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  piVar3 = DAT_100f1c5c;
  piVar4 = (int *)*DAT_100f1c5c;
  while( true ) {
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10117c88(PTR_s_WEST_TOPDIR_framework_display_li_100f1c78,0x553,
                   PTR_s_view_manager_pre_anim_refocus_100f1c74,
                   PTR_s_new_focus_view____NULL_100f1c70);
    }
    uVar5 = (uint)*(ushort *)(piVar4[1] + 0xc);
    if (param_1 == uVar5) break;
    piVar4 = (int *)*piVar4;
  }
  iVar6 = DAT_100f1c5c[0x11];
  if ((int *)iVar6 != piVar4) {
    if ((iVar6 == 0) || (*(char *)(iVar6 + 0x19) == '\0')) {
      cVar1 = *(char *)((int)piVar4 + 0x19);
    }
    else {
      uVar2 = *(undefined2 *)(*(int *)(iVar6 + 4) + 0xc);
      FUN_100a5b78(DAT_100f1c68 | (DAT_100f1c64 - DAT_100f1c60) * 0x20 & 0xff00U,
                   PTR_s_view__d_focus__d_100f1c6c,uVar2,0,param_4);
      *(undefined1 *)(iVar6 + 0x19) = 0;
      FUN_100f0900(uVar2,8,*(undefined4 *)(iVar6 + 0x10));
      uVar5 = (uint)*(ushort *)(piVar4[1] + 0xc);
      cVar1 = *(char *)((int)piVar4 + 0x19);
    }
    if (cVar1 == '\0') {
      FUN_100a5b78(DAT_100f1c68 | (DAT_100f1c64 - DAT_100f1c60) * 0x20 & 0xff00U,
                   PTR_s_view__d_focus__d_100f1c6c,uVar5,1,param_4);
      *(undefined1 *)((int)piVar4 + 0x19) = 1;
      FUN_100f0900(uVar5,7,piVar4[4]);
      piVar3[0x10] = (int)piVar4;
    }
    else {
      piVar3[0x10] = (int)piVar4;
    }
  }
  return;
}

