/* FUN_2c5f944c @ 0x2c5f944c */

ushort * FUN_2c5f944c(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  
  puVar2 = (ushort *)(**(code **)*param_1)(1,0xc);
  *puVar2 = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  iVar3 = FUN_2c5f1424(DAT_2c5f95d4,param_2,param_3);
  do {
    bVar1 = true;
joined_r0x2c5f947e:
    do {
      if ((param_3 <= iVar3) || (!bVar1)) {
        if ((iVar3 == param_3) && (*puVar2 != 0)) {
          return puVar2;
        }
        goto LAB_2c5f95b4;
      }
      iVar4 = FUN_2c5f1424(DAT_2c5f95d8,param_2,param_3,iVar3);
      iVar5 = FUN_2c5f1424(DAT_2c5f95d4,param_2,param_3,iVar3 + iVar4);
      if (iVar4 != 0 || iVar5 != 0) {
        pcVar7 = (char *)(param_2 + iVar3);
        uVar6 = FUN_2c5f93c8(*param_1,pcVar7,iVar4);
        FUN_2c5f6c14();
        uVar10 = (uint)*puVar2;
        uVar8 = uVar10 + 1;
        if ((uVar8 & uVar10) == 0) {
          if (uVar8 != 0x10000) {
            iVar9 = (**(code **)(*param_1 + 4))(*(undefined4 *)(puVar2 + 4),uVar8 * 0x20 + -0x10);
            puVar11 = (undefined4 *)(iVar9 + uVar10 * 0x10);
            *(int *)(puVar2 + 4) = iVar9;
            *puVar2 = (ushort)uVar8;
            if (puVar11 != (undefined4 *)0x0) goto LAB_2c5f9514;
          }
          FUN_2c5f6a50(uVar6);
          (**(code **)(*param_1 + 8))(uVar6);
LAB_2c5f95b4:
          iVar3 = *param_1;
          FUN_2c5f9384(iVar3,puVar2);
          (**(code **)(iVar3 + 8))(puVar2);
          return (ushort *)0x0;
        }
        *puVar2 = (ushort)uVar8;
        puVar11 = (undefined4 *)(*(int *)(puVar2 + 4) + uVar10 * 0x10);
LAB_2c5f9514:
        *puVar11 = uVar6;
        puVar11[1] = iVar3;
        puVar11[2] = iVar3 + iVar4 + -1;
        puVar11[3] = 0;
        iVar9 = iVar3;
        if (*(int *)(puVar2 + 2) < iVar3) {
          do {
            pcVar7 = pcVar7 + -1;
            iVar9 = iVar9 + -1;
            if (*pcVar7 == '|') break;
            puVar11[1] = iVar9;
            puVar11[3] = puVar11[3] + 1;
          } while (*(int *)(puVar2 + 2) < iVar9);
        }
        bVar1 = true;
        iVar3 = iVar3 + iVar4 + iVar5;
        if (iVar5 != 0) goto joined_r0x2c5f947e;
      }
      iVar4 = FUN_2c5f1424(DAT_2c5f95dc,param_2,param_3,iVar3);
      bVar1 = false;
      iVar3 = iVar3 + iVar4;
    } while ((iVar4 == 0) || (param_3 == iVar3));
    *(int *)(puVar2 + 2) = iVar3;
    FUN_2c5f9384(*param_1,puVar2);
    iVar4 = FUN_2c5f1424(DAT_2c5f95d4,param_2,param_3,iVar3);
    iVar3 = iVar3 + iVar4;
  } while( true );
}

