/* FUN_100e2e94 @ 0x100e2e94 */

undefined4 FUN_100e2e94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  int local_50;
  int iStack_4c;
  undefined1 auStack_48 [36];
  
  uVar2 = DAT_100e2fd0;
  iVar1 = DAT_100e2fcc;
  uVar9 = ((int)PTR_DAT_100e2fa0 - (int)PTR_DAT_100e2fa4) * 0x20 & 0xff00;
  puVar10 = (undefined1 *)(param_1 + 0x1c);
  do {
    iVar4 = FUN_101385a6(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = FUN_101385b4(param_1);
    if (iVar4 < 0) {
      uVar5 = uVar9 | 0x1020000;
      puVar8 = PTR_s_Could_not_get_open_list_100e2fa8;
LAB_100e2ed4:
      uVar5 = uVar5 | 0x11;
LAB_100e2ed8:
      FUN_100a5b78(uVar5,puVar8);
      FUN_100a5b78(DAT_100e2fac | uVar9,DAT_100e2fb0);
      FUN_100e2e44(param_1);
      return 0xffffffea;
    }
    iVar4 = FUN_101385f2(param_1,auStack_48,0x1e);
    uVar5 = DAT_100e2fb8;
    puVar8 = DAT_100e2fb4;
    if (iVar4 < 0) {
LAB_100e2f08:
      uVar5 = uVar5 | uVar9;
      goto LAB_100e2ed8;
    }
    iVar4 = FUN_101385b4(param_1);
    if (iVar4 < 0) {
      uVar5 = uVar9 | 0x10c0000;
      puVar8 = PTR_s_Could_not_get_open_list_100e2fa8;
      goto LAB_100e2ed4;
    }
    iVar4 = FUN_100e4034(param_1,&local_50,&iStack_4c);
    uVar5 = DAT_100e2fc0;
    puVar8 = DAT_100e2fbc;
    if (iVar4 < 0) goto LAB_100e2f08;
    iVar4 = FUN_101385d0(param_1);
    if (iVar4 < 0) {
      uVar5 = uVar9 | 0x1160000;
      puVar8 = DAT_100e2fc4;
      goto LAB_100e2ed4;
    }
    iVar6 = FUN_101385d0(param_1);
    iVar3 = iStack_4c;
    iVar4 = local_50;
    uVar5 = DAT_100e2fc8;
    puVar8 = DAT_100e2fc4;
    if (iVar6 < 0) goto LAB_100e2f08;
    iVar6 = 0;
    do {
      iVar7 = FUN_1011ea18(auStack_48,*(undefined4 *)(iVar6 * 0xc + iVar1));
      if (iVar7 == 0) {
        iVar7 = iVar6 * 0xc + iVar1;
        if ((iVar4 != *(int *)(iVar7 + 4)) || (iVar3 != *(int *)(iVar7 + 8))) {
          FUN_100a5b78(uVar9 | 0xf00011,uVar2,auStack_48);
        }
        *puVar10 = (char)iVar6;
        break;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 7);
    puVar10 = puVar10 + 1;
  } while( true );
}

