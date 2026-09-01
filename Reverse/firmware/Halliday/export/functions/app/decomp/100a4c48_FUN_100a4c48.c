/* FUN_100a4c48 @ 0x100a4c48 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_100a4c48(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint local_3c;
  uint local_38 [3];
  undefined2 local_2c;
  
  iVar3 = thunk_FUN_10112e84(DAT_100a4ea8);
  if (iVar3 != 0) {
    local_3c = 0;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + -1;
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + -0x76c;
    iVar4 = FUN_101221a8(param_1);
    iVar2 = DAT_100a4ecc;
    if (iVar4 == 0) {
      iVar4 = 0;
      iVar7 = DAT_100a4ecc;
      do {
        if (param_2 == 0) {
          iVar5 = *(int *)(iVar7 + 4);
        }
        else {
          iVar5 = *(int *)(iVar7 + 0xcc);
        }
        if (iVar5 < 2) {
          FUN_1012da64(param_1,&local_3c);
          iVar4 = 0;
          puVar8 = DAT_100a4fa8;
          goto LAB_100a4f0e;
        }
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + 8;
      } while (iVar4 != 0x19);
      FUN_100a5b78(DAT_100a4ed0 | (DAT_100a4eac - DAT_100a4eb0) * 0x20 & 0xff00U,DAT_100a4ec4,
                   DAT_100a4ed4);
      uVar9 = 0xfffffffe;
    }
    else {
      FUN_100a5b78(DAT_100a4ebc | (DAT_100a4eac - DAT_100a4eb0) * 0x20 & 0xff00U,DAT_100a4ec4,
                   DAT_100a4ec0);
      uVar9 = 0xfffffff8;
    }
    goto LAB_100a4cb6;
  }
  FUN_100a5b78((DAT_100a4eac - DAT_100a4eb0) * 0x20 & 0xff00U | 0x1d40011,DAT_100a4eb8,DAT_100a4eb4)
  ;
  goto LAB_100a4c78;
  while( true ) {
    if ((local_3c == *puVar8) && (1 < (int)puVar8[1])) {
      iVar4 = 1;
      goto LAB_100a4e74;
    }
    iVar4 = iVar4 + 1;
    puVar8 = puVar8 + 2;
    if (iVar4 == 0x19) break;
LAB_100a4f0e:
    if ((local_3c == puVar8[0x32]) && (1 < (int)puVar8[0x33])) {
      iVar4 = 2;
LAB_100a4e74:
      uVar10 = (DAT_100a4eac - DAT_100a4eb0) * 0x20 & 0xff00;
      FUN_100a5b78(uVar10 | DAT_100a4ef8,DAT_100a4ec4,DAT_100a4efc);
      if ((iVar4 != 2) || (param_2 != 0)) {
        uVar9 = 0xfffffffd;
        goto LAB_100a4cb6;
      }
      iVar4 = 0;
      iVar7 = DAT_100a4ecc;
      goto LAB_100a4d26;
    }
  }
  goto LAB_100a4f34;
  while( true ) {
    iVar4 = iVar4 + 1;
    iVar7 = iVar7 + 8;
    if (iVar4 == 0x19) break;
LAB_100a4d26:
    if ((local_3c == *(uint *)(iVar7 + 200)) && (1 < *(int *)(iVar7 + 0xcc))) {
      *(undefined4 *)(iVar2 + (iVar4 + 0x19) * 8 + 4) = 0;
      break;
    }
  }
  FUN_100a5b78(uVar10 | 0x1080031,DAT_100a4edc,DAT_100a4ed8);
LAB_100a4f34:
  uVar10 = local_3c;
  iVar7 = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_2c = 0;
  iVar4 = iVar2;
  do {
    if (*(int *)(iVar4 + 4) == 3) {
      bVar1 = false;
LAB_100a4e1a:
      iVar4 = FUN_1012da5e(iVar3,local_38 + 1);
      if (iVar4 != 0) {
        FUN_100a5b78(DAT_100a4ee4 | (DAT_100a4eac - DAT_100a4eb0) * 0x20 & 0xff00U,DAT_100a4eec,
                     DAT_100a4ee8);
        goto LAB_100a4e40;
      }
      FUN_1012da64(local_38 + 1,local_38);
      if (!bVar1) {
        iVar4 = 0;
        if (local_38[0] < uVar10) goto LAB_100a4dc4;
        iVar4 = 0;
        if (local_38[0] <= uVar10) goto LAB_100a4e40;
        goto LAB_100a4de6;
      }
      iVar4 = 0;
      if (local_38[0] < uVar10) goto LAB_100a4d72;
      iVar4 = 0;
      if (local_38[0] <= uVar10) goto LAB_100a4e40;
      goto LAB_100a4d9c;
    }
    if (*(int *)(iVar4 + 0xcc) == 3) {
      bVar1 = true;
      goto LAB_100a4e1a;
    }
    iVar7 = iVar7 + 1;
    iVar4 = iVar4 + 8;
  } while (iVar7 != 0x19);
LAB_100a4f5e:
  iVar3 = FUN_100a464c(iVar3,param_1);
  if (iVar3 == 0) {
    FUN_100a4614(param_2,local_3c,3);
    goto LAB_100a4f72;
  }
  goto LAB_100a4fa0;
  while (iVar4 = iVar4 + 1, iVar4 != 0x19) {
LAB_100a4d72:
    if (*(int *)(iVar2 + iVar4 * 8 + 0xcc) == 3) {
      iVar4 = iVar4 + 0x19;
      uVar6 = *(uint *)(iVar2 + iVar4 * 8);
      if (uVar6 <= uVar10) goto LAB_100a4db2;
      goto LAB_100a4d88;
    }
  }
  goto LAB_100a4e40;
  while (iVar4 = iVar4 + 1, iVar4 != 0x19) {
LAB_100a4d9c:
    if (*(int *)(iVar2 + iVar4 * 8 + 0xcc) == 3) {
      iVar4 = iVar4 + 0x19;
      uVar6 = *(uint *)(iVar2 + iVar4 * 8);
      if (uVar10 < uVar6) goto LAB_100a4db2;
      break;
    }
  }
  goto LAB_100a4e40;
LAB_100a4db2:
  if (uVar6 < local_38[0]) {
LAB_100a4d88:
    *(undefined4 *)(iVar2 + iVar4 * 8 + 4) = 2;
    goto LAB_100a4f5e;
  }
  goto LAB_100a4e40;
  while (iVar4 = iVar4 + 1, iVar4 != 0x19) {
LAB_100a4dc4:
    iVar7 = iVar2 + iVar4 * 8;
    if (*(int *)(iVar7 + 4) == 3) {
      uVar6 = *(uint *)(iVar2 + iVar4 * 8);
      if (uVar6 <= uVar10) goto LAB_100a4df8;
      goto LAB_100a4dd6;
    }
  }
  goto LAB_100a4e40;
LAB_100a4df8:
  if (local_38[0] <= uVar6) goto LAB_100a4e40;
LAB_100a4dd6:
  *(undefined4 *)(iVar7 + 4) = 2;
  goto LAB_100a4f5e;
  while (iVar4 = iVar4 + 1, iVar4 != 0x19) {
LAB_100a4de6:
    iVar7 = iVar2 + iVar4 * 8;
    if (*(int *)(iVar7 + 4) == 3) {
      uVar6 = *(uint *)(iVar2 + iVar4 * 8);
      if (uVar10 < uVar6) goto LAB_100a4df8;
      break;
    }
  }
LAB_100a4e40:
  FUN_100a4614(param_2,local_3c,2);
  FUN_100a5b78(DAT_100a4ef0 | (DAT_100a4eac - DAT_100a4eb0) * 0x20 & 0xff00U,DAT_100a4ec4,
               DAT_100a4ef4,*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 1));
LAB_100a4f72:
  iVar3 = thunk_FUN_1009efe8(DAT_100a4fac,DAT_100a4fa8,400);
  if (iVar3 < 0) {
    FUN_100a5b78(DAT_100a4fb8 | (DAT_100a4fb4 - DAT_100a4fb0) * 0x20 & 0xff00U,DAT_100a4fc0,
                 DAT_100a4fbc,DAT_100a4fac,iVar3);
LAB_100a4fa0:
    uVar9 = 0xffffffff;
LAB_100a4cb6:
    FUN_100a5b78((DAT_100a4eac - DAT_100a4eb0) * 0x20 & 0xff00U | 0x1da0011,DAT_100a4eb8,
                 DAT_100a4ec8,uVar9);
LAB_100a4c78:
    uVar9 = 0xffffffff;
  }
  else {
    *DAT_100a4ee0 = *DAT_100a4ee0 + -1;
    uVar9 = 0;
  }
  return uVar9;
}

