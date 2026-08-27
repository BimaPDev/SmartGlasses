/* FUN_14004c58 @ 0x14004c58 */

undefined1 * FUN_14004c58(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  
  iVar1 = DAT_14004dc8;
  puVar3 = param_3;
  uVar5 = param_4;
  if ((param_1 == 0) || (param_2 == 0)) {
LAB_14004d18:
    FUN_14003d0c(0,0xfffffffc,puVar3,uVar5,param_4);
    return (undefined1 *)0x0;
  }
  iVar9 = (param_2 + 3U & 0xfffffffc) + 0xc;
  puVar3 = (undefined4 *)LZCOUNT(param_1);
  if ((iVar9 != 0) && (uVar5 = LZCOUNT(iVar9) + (int)puVar3, uVar5 < 0x20)) goto LAB_14004d18;
  uVar5 = iVar9 * param_1;
  if (param_3 == (undefined4 *)0x0) {
    uVar6 = 0;
    uVar10 = 0;
LAB_14004cf2:
    if (*(int *)(DAT_14004dc8 + 0xa0) == 0) {
      puVar7 = (undefined1 *)FUN_14004518(*(undefined4 *)(DAT_14004dc8 + 0x80),0x34,1);
    }
    else {
      puVar7 = (undefined1 *)FUN_140072ec();
    }
    if (puVar7 == (undefined1 *)0x0) {
LAB_14004d06:
      FUN_14003d0c(0,0xfffffffb);
      return (undefined1 *)0x0;
    }
    if (uVar6 != 0) {
      uVar8 = 1;
      goto LAB_14004cb8;
    }
    iVar2 = FUN_14004518(*(undefined4 *)(iVar1 + 0x7c),uVar5,0);
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 0xa0) == 0) {
        FUN_1400459c(*(undefined4 *)(iVar1 + 0x80),puVar7);
      }
      else {
        FUN_140073cc();
      }
      goto LAB_14004d06;
    }
    uVar8 = 3;
  }
  else {
    puVar7 = (undefined1 *)param_3[2];
    if (puVar7 == (undefined1 *)0x0) {
      uVar6 = param_3[3];
      if (uVar6 != 0) goto LAB_14004d3e;
    }
    else {
      uVar6 = (int)puVar7 << 0x1e;
      if ((uVar6 != 0) || (uVar6 = param_3[3], uVar6 < 0x34)) {
LAB_14004d3e:
        FUN_14003d0c(0,0xfffffff7,puVar3,uVar6,param_4);
        return (undefined1 *)0x0;
      }
    }
    uVar6 = param_3[4];
    uVar10 = *param_3;
    uVar4 = param_3[5];
    if (uVar6 != 0) {
      if (((uVar6 & 3) != 0) || (uVar4 <= uVar5 && uVar5 - uVar4 != 0)) goto LAB_14004d2a;
      if (puVar7 != (undefined1 *)0x0) {
        uVar8 = 0;
        goto LAB_14004cb8;
      }
      goto LAB_14004cf2;
    }
    if (uVar4 != 0) {
LAB_14004d2a:
      FUN_14003d0c(0,0xfffffff6,uVar4,uVar6,param_4);
      return (undefined1 *)0x0;
    }
    if (puVar7 == (undefined1 *)0x0) {
      uVar6 = 0;
      goto LAB_14004cf2;
    }
    iVar2 = FUN_14004518(*(undefined4 *)(DAT_14004dc8 + 0x7c),uVar5,0);
    if (iVar2 == 0) goto LAB_14004d06;
    uVar8 = 2;
  }
  uVar6 = FUN_14000894(iVar2,0,uVar5);
LAB_14004cb8:
  puVar7[2] = uVar8;
  *(undefined4 *)(puVar7 + 0x28) = 0;
  *(undefined4 *)(puVar7 + 0x2c) = 0;
  *(undefined4 *)(puVar7 + 8) = 0;
  *(undefined4 *)(puVar7 + 0x30) = 0;
  *(undefined4 *)(puVar7 + 4) = uVar10;
  *(int *)(puVar7 + 0x24) = param_2;
  *puVar7 = 0xfa;
  FUN_1400728c(puVar7 + 0xc,param_1,iVar9,uVar6);
  *(undefined4 *)(iVar1 + 0x70) = DAT_14004dc4;
  FUN_14003d14(puVar7,*(undefined4 *)(puVar7 + 4));
  return puVar7;
}

