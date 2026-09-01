/* FUN_10053684 @ 0x10053684 */

int FUN_10053684(undefined1 *param_1,int param_2,undefined4 param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  int local_38;
  ushort local_2e;
  int local_2c;
  
  local_2c = *DAT_100537d0;
  if (((param_1 == (undefined1 *)0x0) || (param_2 == 0)) || (param_4 == (uint *)0x0)) {
    iVar1 = -0x16;
    goto LAB_100536e6;
  }
  local_38 = thunk_FUN_10115958();
  unaff_r6 = FUN_100ed61c(2,*(int *)(param_1 + 4) * 0x4c,DAT_100537d4);
  if (unaff_r6 == 0) goto LAB_1005371c;
  local_2e = 0;
  iVar1 = FUN_10052e20(unaff_r6,*(undefined2 *)(param_1 + 4),&local_2e);
  if (iVar1 == 0) goto LAB_100536f4;
  do {
    FUN_100ed77c(2,unaff_r6);
LAB_100536e6:
    while( true ) {
      if (*DAT_100537d0 == local_2c) {
        return iVar1;
      }
      FUN_1013cdc0();
LAB_100536f4:
      uVar4 = (uint)local_2e;
      if (((*(int *)(param_1 + 8) == 0) && (*(int *)(param_1 + 0xc) == 0)) &&
         (iVar2 = unaff_r6, param_1[0x10] == '\0')) goto LAB_10053734;
      iVar2 = FUN_100ed61c(2,uVar4 * 0x4c,DAT_100537d4);
      if (iVar2 != 0) break;
      FUN_100ed77c(2,unaff_r6);
LAB_1005371c:
      iVar1 = -0xc;
    }
    uVar4 = FUN_10053170(unaff_r6,local_2e,iVar2,local_2e,param_1);
LAB_10053734:
    switch(*param_1) {
    case 0:
      iVar1 = FUN_10053210(iVar2,uVar4,param_2,param_3,param_4);
      break;
    case 1:
      iVar1 = FUN_10053344(iVar2,uVar4,param_2,param_3,param_4);
      break;
    case 2:
      iVar1 = FUN_10053620(iVar2,uVar4,param_2,param_3,param_4);
      break;
    case 3:
      iVar1 = FUN_100534e0(iVar2,uVar4,param_2,param_3,param_4);
      break;
    default:
      iVar1 = -0x16;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = (uint)local_2e;
      param_5[1] = uVar4;
      param_5[2] = local_2e - uVar4;
      param_5[3] = *param_4;
      iVar3 = thunk_FUN_10115958();
      param_5[4] = iVar3 - local_38;
    }
    if (unaff_r6 != iVar2) {
      FUN_100ed77c(2,iVar2);
    }
  } while( true );
}

