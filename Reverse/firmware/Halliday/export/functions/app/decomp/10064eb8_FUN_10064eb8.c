/* FUN_10064eb8 @ 0x10064eb8 */

int FUN_10064eb8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  
  puVar11 = DAT_10065170;
  piVar1 = DAT_10065164;
  if (*DAT_10065164 == 0) {
    if (param_1 == (undefined4 *)0x0) {
      return 0;
    }
    uVar12 = (DAT_1006516c - DAT_10065168) * 0x20 & 0xff00;
    if (param_1[2] == 0) goto LAB_10064f10;
    FUN_1011ea48(DAT_10065170,0,0x58);
    iVar2 = FUN_10112e84(DAT_10065174);
    puVar11[3] = iVar2;
    if (iVar2 == 0) {
      FUN_100a5b78(uVar12 | 0x7d0011,DAT_10065180,DAT_1006517c,DAT_10065178);
    }
    else {
      iVar2 = FUN_100651fc(param_1[2]);
      puVar11[7] = iVar2;
      if (iVar2 != 0) {
        if (param_1[3] != 0) {
          uVar3 = FUN_100651fc();
          puVar11[8] = uVar3;
        }
        iVar2 = DAT_1006518c;
        FUN_1012d220(DAT_1006518c,DAT_10065190,0x100);
        uVar3 = FUN_1011dd80(*(undefined4 *)(iVar2 + 0x10));
        *(undefined4 *)(iVar2 + 0x14) = uVar3;
        puVar11[4] = 0x10000;
        puVar11[5] = iVar2;
        uVar3 = FUN_1011dd80(iVar2);
        puVar11[6] = uVar3;
        FUN_1013ca1a(DAT_10065194,0,1);
        FUN_1013c856(DAT_10065198);
        puVar9 = DAT_1006519c;
        *DAT_1006519c = 0;
        puVar9[1] = 0;
        uVar3 = *param_1;
        iVar2 = *DAT_100651a0 + 1;
        *DAT_100651a0 = iVar2;
        puVar11[1] = iVar2;
        *puVar11 = uVar3;
        FUN_100a5b78(uVar12 | 0xa00032,DAT_10065180,DAT_100651a4,uVar3,iVar2);
        *piVar1 = (int)puVar11;
        goto LAB_10064fb8;
      }
    }
    FUN_10064b84(DAT_10065170);
    *piVar1 = 0;
LAB_10064f10:
    FUN_100a5b78(uVar12 | 0x1620011,DAT_10065188,DAT_10065184);
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    piVar5 = (int *)(*DAT_10065164 + 0x50);
    iVar2 = *piVar5;
    *piVar5 = iVar2 + 1;
    if (iVar2 == 0) {
      *piVar5 = *piVar5 + -1;
      FUN_100a5b78((DAT_1006516c - DAT_10065168) * 0x20 & 0xff00U | 0x1740011,DAT_10065188,
                   DAT_100651b8);
      return 0;
    }
    goto LAB_1006515c;
  }
LAB_10064fb8:
  puVar11 = (undefined4 *)*piVar1;
  piVar5 = puVar11 + 0x14;
  iVar6 = *piVar5;
  *piVar5 = iVar6 + 1;
  iVar2 = DAT_1006516c;
  if (iVar6 == 0) {
    iVar6 = (**(code **)(*(int *)(puVar11[3] + 8) + 0x1c))(puVar11[3],puVar11[7]);
    uVar12 = (iVar2 - DAT_10065168) * 0x20 & 0xff00;
    if (iVar6 == 0) {
      if ((puVar11[8] == 0) ||
         (iVar6 = (**(code **)(*(int *)(puVar11[3] + 8) + 0x1c))(puVar11[3],puVar11[8],1),
         iVar6 == 0)) {
        puVar11[4] = 0x10000;
        iVar2 = puVar11[3];
        puVar9 = (undefined4 *)puVar11[5];
        *puVar9 = 0;
        puVar9[7] = 0;
        puVar9[1] = 0;
        puVar9[6] = 0;
        iVar6 = (*(code *)**(undefined4 **)(iVar2 + 8))(iVar2,puVar11 + 4);
        uVar3 = DAT_100651c8;
        if (iVar6 == 0) {
          uVar7 = *puVar11;
          uVar10 = param_1[1];
          uVar8 = puVar11[1];
          puVar11[2] = uVar10;
          puVar4 = (undefined2 *)thunk_FUN_1009f30c(0x18,uVar3);
          if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 1;
            *(undefined4 *)(puVar4 + 4) = 0xc;
            *(undefined4 *)(puVar4 + 2) = 0;
            *(undefined4 *)(puVar4 + 6) = uVar7;
            *(undefined4 *)(puVar4 + 8) = uVar8;
            *(undefined4 *)(puVar4 + 10) = uVar10;
            FUN_10064d1c(puVar11,puVar4);
            FUN_1012d1f4(puVar4);
            FUN_101140ac(puVar11 + 9);
            (**(code **)(*(int *)(puVar11[3] + 8) + 0x14))(puVar11[3],DAT_100651cc);
            FUN_100a5b78(uVar12 | 0x1380033,DAT_100651b0,DAT_100651d0,*puVar11,puVar11[1],param_1[1]
                        );
            goto LAB_1006515c;
          }
          FUN_100a5b78(uVar12 | 0x1300011,DAT_100651f8,DAT_100651f4);
          iVar6 = -0xc;
          (**(code **)(*(int *)(puVar11[3] + 8) + 4))();
        }
        else {
          FUN_100a5b78(uVar12 | 0x1280011,DAT_100651b0,DAT_100651c4);
        }
        if (puVar11[8] != 0) {
          FUN_1011dd74(puVar11[3],1);
        }
      }
      else {
        FUN_100a5b78(DAT_100651bc | uVar12,DAT_100651b0,DAT_100651c0,*(undefined4 *)puVar11[8]);
      }
      FUN_1011dd74(puVar11[3],0);
    }
    else {
      FUN_100a5b78(DAT_100651a8 | uVar12,DAT_100651b0,DAT_100651ac,*(undefined4 *)puVar11[7]);
    }
    *piVar5 = *piVar5 + -1;
    if ((iVar6 < 0) && (iVar6 != -0x78)) {
      FUN_100a5b78(DAT_100651b4 | uVar12,DAT_10065188,DAT_100651b8);
      FUN_10064b84(*piVar1);
      *piVar1 = 0;
    }
  }
LAB_1006515c:
  return *piVar1;
}

