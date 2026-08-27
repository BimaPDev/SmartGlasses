/* FUN_140c62b8 @ 0x140c62b8 */

undefined4 *
FUN_140c62b8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,uint *param_9,
            int param_10)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 ****ppppuVar18;
  uint local_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  undefined4 ***local_58 [13];
  
  puVar3 = param_9;
  iVar2 = param_7;
  local_7c = 0;
  iVar14 = param_7 + 0x6c;
  local_68 = param_3;
  local_64 = param_4;
  iVar7 = FUN_140ccaa8(iVar14);
  iVar14 = FUN_140cc580(iVar14);
  uVar8 = FUN_140dd3a4(param_10);
  local_60 = 0;
  while( true ) {
    iVar9 = FUN_140c5f22(&local_68,&param_5);
    uVar13 = local_60;
    if ((iVar9 == 0) || (uVar8 <= local_7c)) break;
    if (local_60 != 0) goto LAB_140c63d8;
    iVar9 = FUN_140c5596(iVar14,*(undefined1 *)(param_10 + local_7c),0);
    if (iVar9 != 0x25) {
      cVar1 = *(char *)(param_10 + local_7c);
      cVar6 = FUN_140c5ee0(&local_68);
      if (cVar1 == cVar6) {
        FUN_140c5418(&local_68);
      }
      else {
        local_60 = local_60 | 4;
      }
      goto LAB_140c642e;
    }
    iVar9 = FUN_140c5596(iVar14,*(undefined1 *)(param_10 + local_7c + 1),0);
    local_5c = uVar13;
    if ((iVar9 == 0x45) || (uVar13 = local_7c + 1, iVar9 == 0x4f)) {
      iVar9 = FUN_140c5596(iVar14,*(undefined1 *)(param_10 + local_7c + 2),0);
      uVar13 = local_7c + 2;
    }
    local_7c = uVar13;
    switch(iVar9) {
    case 0x41:
      FUN_140cc338(iVar7,local_58);
      goto LAB_140c63f0;
    case 0x42:
      FUN_140cc378(iVar7,local_58);
      goto LAB_140c6448;
    case 0x43:
    case 0x59:
    case 0x79:
      FUN_140c5f30(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,0,9999,4,iVar2,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        if ((int)local_5c < 0) {
          uVar13 = local_5c + 100;
        }
        else {
          uVar13 = local_5c - 0x76c;
        }
        puVar3[5] = uVar13;
      }
      break;
    case 0x44:
      iVar9 = DAT_140c6840;
      goto LAB_140c6540;
    default:
      goto switchD_140c635a_caseD_45;
    case 0x48:
      uVar16 = 0x17;
      uVar12 = 0;
      goto LAB_140c658c;
    case 0x49:
      uVar16 = 0xc;
      uVar12 = 1;
LAB_140c658c:
      FUN_140c5f30(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,uVar12,uVar16,2,
                   iVar2,&local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        puVar3[2] = local_5c;
      }
      break;
    case 0x4d:
      FUN_140c5f30(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,0,0x3b,2,iVar2,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        puVar3[1] = local_5c;
      }
      break;
    case 0x52:
      iVar11 = DAT_140c6844 + -6;
      iVar9 = DAT_140c6844;
      goto LAB_140c6544;
    case 0x53:
      FUN_140c5f30(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,0,0x3d,2,iVar2,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        *puVar3 = local_5c;
      }
      break;
    case 0x54:
      iVar9 = DAT_140c6848;
LAB_140c6540:
      iVar11 = iVar9 + -9;
LAB_140c6544:
      FUN_140c5558(iVar14,iVar11,iVar9,local_58);
      ppppuVar18 = local_58;
      goto LAB_140c654e;
    case 0x58:
      FUN_140cc320(iVar7,local_58);
      ppppuVar18 = (undefined4 ****)local_58[0];
      goto LAB_140c654e;
    case 0x5a:
      bVar4 = FUN_140c5ee0(&local_68);
      if (-1 < (int)((uint)*(byte *)(*(int *)(iVar14 + 0x18) + (uint)bVar4) << 0x1f))
      goto switchD_140c635a_caseD_45;
      FUN_140c5fea(&local_70,param_2,local_68,local_64,param_5,param_6,local_58,DAT_140c684c,0xe,
                   iVar2,&local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      iVar9 = FUN_140c5f22(&local_68,&param_5);
      if ((iVar9 != 0) && ((undefined4 ****)local_58[0] == (undefined4 ****)0x0 && local_60 == 0)) {
        uVar13 = FUN_140c5ee0(&local_68);
        uVar10 = FUN_140c5536(iVar14,0x2d);
        if (uVar10 != (uVar13 & 0xff)) {
          uVar13 = FUN_140c5ee0(&local_68);
          uVar10 = FUN_140c5536(iVar14,0x2b);
          if (uVar10 != (uVar13 & 0xff)) break;
        }
        FUN_140c5f30(&local_70,param_2,local_68,local_64,param_5,param_6,local_58,0,0x17,2,iVar2,
                     &local_60);
        local_68 = local_70;
        local_64 = uStack_6c;
        FUN_140c5f30(&local_70,param_2,local_70,uStack_6c,param_5,param_6,local_58,0,0x3b,2,iVar2,
                     &local_60);
        local_68 = local_70;
        local_64 = uStack_6c;
      }
      break;
    case 0x61:
      FUN_140cc358(iVar7,local_58);
LAB_140c63f0:
      FUN_140c5fea(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,local_58,7,iVar2,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        puVar3[6] = local_5c;
      }
      break;
    case 0x62:
    case 0x68:
      FUN_140cc3b6(iVar7,local_58);
LAB_140c6448:
      FUN_140c5fea(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,local_58,0xc,iVar2,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      uVar13 = local_5c;
      if (local_60 == 0) {
LAB_140c6482:
        puVar3[4] = uVar13;
        local_68 = local_70;
        local_64 = uStack_6c;
      }
      break;
    case 99:
      ppppuVar18 = *(undefined4 *****)(*(int *)(iVar7 + 8) + 0x18);
      goto LAB_140c654e;
    case 100:
      uVar16 = 0x1f;
      uVar17 = 2;
      uVar12 = 1;
      goto LAB_140c64c6;
    case 0x65:
      bVar4 = FUN_140c5ee0(&local_68);
      if ((int)((uint)*(byte *)(*(int *)(iVar14 + 0x18) + (uint)bVar4) << 0x1c) < 0) {
        FUN_140c5346(local_68);
        local_64 = 0xffffffff;
        uVar12 = 1;
        uVar16 = 9;
        uVar17 = 1;
      }
      else {
        uVar16 = 0x1f;
        uVar17 = 2;
        uVar12 = 10;
      }
LAB_140c64c6:
      FUN_140c5f30(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,uVar12,uVar16,
                   uVar17,iVar2,&local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        puVar3[3] = local_5c;
      }
      break;
    case 0x6d:
      FUN_140c5f30(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,1,0xc,2,iVar2,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 != 0) break;
      uVar13 = local_5c - 1;
      goto LAB_140c6482;
    case 0x6e:
      uVar5 = FUN_140c5ee0(&local_68);
      iVar9 = FUN_140c5596(iVar14,uVar5,0);
      bVar15 = iVar9 == 10;
      goto LAB_140c667a;
    case 0x74:
      uVar5 = FUN_140c5ee0(&local_68);
      iVar9 = FUN_140c5596(iVar14,uVar5,0);
      bVar15 = iVar9 == 9;
LAB_140c667a:
      if (bVar15) {
        FUN_140c5418(&local_68);
      }
      else {
switchD_140c635a_caseD_45:
        local_60 = local_60 | 4;
      }
      break;
    case 0x78:
      FUN_140cc314(iVar7,local_58);
      ppppuVar18 = (undefined4 ****)local_58[0];
LAB_140c654e:
      FUN_140c62b8(&local_70,param_2,local_68,local_64,param_5,param_6,iVar2,&local_60,puVar3,
                   ppppuVar18);
      local_68 = local_70;
      local_64 = uStack_6c;
    }
LAB_140c642e:
    local_7c = local_7c + 1;
  }
  if ((local_60 != 0) || (local_7c != uVar8)) {
LAB_140c63d8:
    *param_8 = *param_8 | 4;
  }
  *param_1 = local_68;
  param_1[1] = local_64;
  return param_1;
}

