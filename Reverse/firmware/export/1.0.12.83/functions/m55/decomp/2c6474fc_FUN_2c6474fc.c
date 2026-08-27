/* FUN_2c6474fc @ 0x2c6474fc */

undefined1 * FUN_2c6474fc(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  
  iVar2 = DAT_2c64768c;
  puVar4 = param_3;
  uVar6 = param_4;
  if ((param_1 == 0) || (param_2 == 0)) {
LAB_2c647614:
    FUN_2c643b70(0,0xfffffffc,puVar4,uVar6,param_4);
    return (undefined1 *)0x0;
  }
  puVar4 = (undefined4 *)LZCOUNT(param_1);
  uVar8 = param_2 + 3U & 0xfffffffc;
  if ((uVar8 != 0) && (uVar6 = LZCOUNT(uVar8) + (int)puVar4, uVar6 < 0x20)) goto LAB_2c647614;
  uVar6 = uVar8 * param_1;
  if (param_3 == (undefined4 *)0x0) {
    bVar1 = true;
    uVar7 = 0;
    uVar11 = 0;
LAB_2c6475a2:
    if (*(int *)(DAT_2c64768c + 0x9c) == 0) {
      puVar9 = (undefined1 *)FUN_2c6443f4(*(undefined4 *)(DAT_2c64768c + 0x80),0x24,1);
    }
    else {
      puVar9 = (undefined1 *)FUN_2c6473bc();
    }
    if (puVar9 == (undefined1 *)0x0) {
LAB_2c6475da:
      FUN_2c643b70(0,0xfffffffb);
      return (undefined1 *)0x0;
    }
    if (bVar1) {
      iVar3 = FUN_2c6443f4(*(undefined4 *)(iVar2 + 0x78),uVar6,0);
      if (iVar3 == 0) {
        if (*(int *)(iVar2 + 0x9c) == 0) {
          FUN_2c64447c(*(undefined4 *)(iVar2 + 0x80),puVar9);
        }
        else {
          FUN_2c64749c();
        }
        goto LAB_2c6475da;
      }
      uVar10 = 3;
LAB_2c647644:
      uVar7 = FUN_2c674268(iVar3,0,uVar6);
    }
    else {
      if (puVar9 == (undefined1 *)0x0) goto LAB_2c6475da;
      uVar10 = 1;
    }
LAB_2c64756c:
    puVar9[2] = uVar10;
    *puVar9 = 0xf7;
    *(undefined4 *)(puVar9 + 4) = uVar11;
    *(undefined4 *)(puVar9 + 8) = 0;
    FUN_2c647368(puVar9 + 0xc,param_1,uVar8,uVar7);
    *(undefined4 *)(iVar2 + 0x6c) = DAT_2c647688;
    FUN_2c643b78(puVar9,*(undefined4 *)(puVar9 + 4));
  }
  else {
    puVar9 = (undefined1 *)param_3[2];
    if (puVar9 == (undefined1 *)0x0) {
      uVar7 = param_3[3];
      if (uVar7 != 0) goto LAB_2c6475f2;
    }
    else {
      uVar7 = (int)puVar9 << 0x1e;
      if ((uVar7 != 0) || (uVar7 = param_3[3], uVar7 < 0x24)) {
LAB_2c6475f2:
        FUN_2c643b70(0,0xfffffff7,puVar4,uVar7,param_4);
        return (undefined1 *)0x0;
      }
    }
    uVar7 = param_3[4];
    uVar11 = *param_3;
    uVar5 = param_3[5];
    if (uVar7 == 0) {
      if (uVar5 == 0) {
        if (puVar9 == (undefined1 *)0x0) {
          bVar1 = true;
          uVar7 = 0;
          goto LAB_2c6475a2;
        }
        iVar3 = FUN_2c6443f4(*(undefined4 *)(DAT_2c64768c + 0x78),uVar6,0);
        if (iVar3 == 0) goto LAB_2c6475da;
        uVar10 = 2;
        goto LAB_2c647644;
      }
    }
    else if ((uVar6 < uVar5 || uVar6 - uVar5 == 0) && (uVar7 & 3) == 0) {
      if (puVar9 == (undefined1 *)0x0) {
        bVar1 = false;
        goto LAB_2c6475a2;
      }
      uVar10 = 0;
      goto LAB_2c64756c;
    }
    puVar9 = (undefined1 *)0x0;
    FUN_2c643b70(0,0xfffffff6,uVar5,uVar7,param_4);
  }
  return puVar9;
}

