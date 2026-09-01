/* FUN_100d9834 @ 0x100d9834 */

undefined4 FUN_100d9834(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  char local_30;
  char local_2f;
  short local_2e;
  char local_2c;
  char local_2b;
  undefined1 local_2a;
  
  iVar1 = FUN_100e7690();
  uVar6 = (uint)*(byte *)(param_1 + 3);
  if (iVar1 != 0) {
    if (uVar6 == 0x1a) {
      uVar5 = *(undefined4 *)(param_1 + 8);
    }
    else {
      if (uVar6 != 0x1b) goto LAB_100d984e;
      uVar5 = 0;
    }
    *DAT_100d9b14 = uVar5;
LAB_100d984e:
    FUN_100a5b78(DAT_100d9b20 | (DAT_100d9b1c - DAT_100d9b18) * 0x20 & 0xff00U,DAT_100d9b28,
                 DAT_100d9b24,uVar6 - 0x15);
    return 0;
  }
  if (0x21 < uVar6) {
    if (uVar6 == 0x9f) {
      FUN_100a5b78((DAT_100d9b1c - DAT_100d9b18) * 0x20 & 0xff00U | 0x2cc0031,DAT_100d9b28,
                   DAT_100d9b48);
      FUN_100c99e4();
      FUN_100c99f0();
      FUN_100c9a08();
      FUN_100c9a14();
      FUN_101326a8(0);
      FUN_101326e0(0);
      iVar1 = FUN_100d5108();
      if (iVar1 != 0) {
        FUN_100d9718();
      }
      iVar1 = FUN_100d50e4();
      if (iVar1 != 0) {
        FUN_100da1f4();
      }
      iVar1 = FUN_100d6244();
      if (iVar1 != 0) {
        FUN_100d9718();
      }
      iVar1 = FUN_100d6220();
      if (iVar1 != 0) {
        FUN_100da1f4();
        return 0;
      }
      return 0;
    }
    if (0x9f < uVar6) {
      if (uVar6 != 0xa0) {
        return 0;
      }
      FUN_100a5b78((DAT_100d9b1c - DAT_100d9b18) * 0x20 & 0xff00U | 0x2d00031,DAT_100d9b28,
                   DAT_100d9b3c);
      FUN_100c98d4();
      FUN_100c9924();
      FUN_100c9960();
      FUN_100c998c();
      FUN_1013268c(0);
      FUN_101326c4(0);
      iVar1 = FUN_100d50c0();
      if (iVar1 != 0) {
        iVar8 = FUN_101364ba();
        if (iVar8 == 0) {
          FUN_100d976c(iVar1,2);
        }
        iVar8 = FUN_101364ca(iVar1);
        if (iVar8 == 0) {
          FUN_100da24c(iVar1);
          return 0;
        }
        return 0;
      }
      return 0;
    }
    if (uVar6 == 0x8c) {
      iVar8 = *(int *)(param_1 + 8);
      uVar6 = (uint)*(byte *)(param_1 + 4);
      iVar1 = FUN_100e7598(iVar8,uVar6);
      uVar9 = (DAT_100d9e64 - DAT_100d9e60) * 0x20 & 0xff00;
      if (iVar1 != 0) {
        FUN_100a5b78(uVar9 | 0x1340031,DAT_100d9e88,DAT_100d9e84,uVar6);
        if (uVar6 == 7) {
          uVar5 = 1;
        }
        else {
          if (1 < uVar6 - 8) {
            return 0;
          }
          uVar5 = 0;
        }
        FUN_1013664c(iVar8,uVar5);
        return 0;
      }
      FUN_100a5b78(DAT_100d9e8c | uVar9,DAT_100d9e88,DAT_100d9e90,uVar6);
      if (9 < uVar6) {
        if (uVar6 == 0x80) {
          FUN_100d4f90(iVar8,1);
          return 0;
        }
        return 0;
      }
      if (uVar6 < 6) {
        return 0;
      }
      switch(uVar6) {
      case 7:
        FUN_100d4bdc(iVar8,1);
        FUN_100d4f90(iVar8,0);
        cVar4 = '\x1d';
        break;
      case 8:
        FUN_100d4bdc(iVar8,0);
        FUN_100d4f90(iVar8,0);
        cVar4 = '\x1e';
        break;
      case 9:
        FUN_100d4bdc(iVar8,0);
        FUN_100d4f90(iVar8,0);
        cVar4 = '\x1f';
        break;
      default:
        local_2e = 0;
        FUN_100d93ac(iVar8,9,&local_2e,2);
        if (local_2e != 0) {
          FUN_10131ff2(iVar8);
        }
        cVar4 = '\x1c';
      }
      iVar1 = FUN_1013650a();
      if ((iVar8 == iVar1) ||
         ((iVar1 = FUN_1013650a(), iVar1 != 0 && (iVar1 = FUN_100d5e14(), iVar1 == 2)))) {
        bVar10 = true;
      }
      else {
        iVar1 = FUN_100d5e14();
        bVar10 = iVar1 == 3;
      }
      iVar1 = FUN_1013650a();
      if (((iVar8 == iVar1) || (iVar1 = FUN_100d5e14(), iVar1 == 3)) && (cVar4 == '\x1d')) {
        FUN_100d4e5c(iVar8,&local_30,&local_2f,0);
        local_2c = local_30;
        local_2b = local_2f;
        local_2a = FUN_100d4f08(iVar8);
        FUN_100d93ac(iVar8,7,&local_2c,3);
      }
      if (!bVar10) {
        return 0;
      }
      uVar5 = 0xca;
      goto LAB_100d9bea;
    }
    if (uVar6 != 0x8d) {
      return 0;
    }
    puVar7 = *(undefined4 **)(param_1 + 8);
    local_2c = *(char *)((int)puVar7 + 5);
    if (local_2c == '\0') {
      uVar6 = (*(byte *)((int)puVar7 + 6) >> 4) - 1 & 0xff;
      if (uVar6 < 8) {
        local_2b = *(undefined1 *)(DAT_100d9b2c + uVar6);
        goto LAB_100d98da;
      }
    }
    else if (local_2c == '\x02') {
      uVar6 = 0;
      do {
        if (((int)((uint)(*(byte *)(puVar7 + 2) >> 4) | (uint)*(byte *)((int)puVar7 + 7) << 4) >>
            (uVar6 & 0xff)) << 0x1f < 0) {
          local_2b = *(undefined1 *)(DAT_100d9e94 + uVar6);
          goto LAB_100d98da;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0xc);
    }
    local_2b = 0x2c;
LAB_100d98da:
    if (local_2c == '\0') {
      local_2a = *(undefined1 *)((int)puVar7 + 9);
    }
    else {
      local_2a = 0;
    }
    FUN_100a5b78(DAT_100d9b30 | (DAT_100d9b1c - DAT_100d9b18) * 0x20 & 0xff00U,DAT_100d9b38,
                 DAT_100d9b34,*(byte *)(puVar7 + 1) >> 4,local_2c,local_2b,
                 *(undefined1 *)(puVar7 + 3));
    FUN_100d4e04(*puVar7,local_2c,local_2b,*(undefined1 *)(puVar7 + 3));
    FUN_100d4ec0(*puVar7,local_2a);
    FUN_100d93ac(*puVar7,7,&local_2c,3);
    FUN_10138b3a(*puVar7,puVar7 + 1);
    return 0;
  }
  if (uVar6 < 0x15) {
    return 0;
  }
  switch(uVar6) {
  case 0x16:
    FUN_100a5b78((DAT_100d9b1c - DAT_100d9b18) * 0x20 & 0xff00U | 0x2c80031,DAT_100d9b28,
                 DAT_100d9b44);
    FUN_100d96fc();
    break;
  case 0x17:
    uVar5 = FUN_1013650a();
    iVar1 = FUN_1013651a();
    iVar8 = FUN_1013652c();
    if (iVar8 == 0) {
      if (iVar1 == 0) {
        return 0;
      }
      iVar8 = FUN_100d4dbc(iVar1);
      if (iVar8 != 0) {
        FUN_100d4bdc(iVar1,1);
        FUN_100a5b78(DAT_100d9f08 | (DAT_100d9f04 - DAT_100d9f00) * 0x20 & 0xff00U,DAT_100d9f10,
                     DAT_100d9f0c);
        return 0;
      }
      return 0;
    }
    FUN_100a5b78((DAT_100d9e64 - DAT_100d9e60) * 0x20 & 0xff00U | 0x1d80031,DAT_100d9e9c,
                 DAT_100d9e98);
    FUN_100d4e5c(uVar5,&local_2f,&local_2e,0);
    local_2c = local_2f;
    local_2b = (char)local_2e;
    local_2a = FUN_100d4f08(uVar5);
    FUN_100d93ac(uVar5,7,&local_2c,3);
    uVar3 = 4;
    goto LAB_100d9d84;
  case 0x18:
    FUN_100a5b78((DAT_100d9b1c - DAT_100d9b18) * 0x20 & 0xff00U | 0x2d40031,DAT_100d9b28,
                 DAT_100d9b4c);
    iVar1 = FUN_101364ae(*(undefined4 *)(param_1 + 8));
    if (iVar1 != 0) {
      if (*(char *)(param_1 + 4) == '\0') {
        uVar5 = 2;
      }
      else {
        uVar5 = 1;
      }
      FUN_100d976c(iVar1,uVar5);
    }
    break;
  case 0x19:
    FUN_100a5b78(DAT_100d9b50 | (DAT_100d9b1c - DAT_100d9b18) * 0x20 & 0xff00U,DAT_100d9b28,
                 DAT_100d9b54);
    iVar1 = FUN_101364ae(*(undefined4 *)(param_1 + 8));
    if (iVar1 != 0) {
      FUN_100d9718();
    }
    break;
  case 0x1a:
    uVar6 = (DAT_100d9b1c - DAT_100d9b18) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100d9b58 | uVar6,DAT_100d9b28,DAT_100d9b5c);
    uVar5 = *(undefined4 *)(param_1 + 8);
    puVar2 = (undefined1 *)FUN_10136428(uVar5);
    FUN_10119ddc(&local_2c,0x12,DAT_100d9b60,puVar2[5],puVar2[4],puVar2[3],puVar2[2],puVar2[1],
                 *puVar2);
    FUN_100a5b78(DAT_100d9b64 | uVar6,DAT_100d9b6c,DAT_100d9b68,uVar5,&local_2c);
    uVar3 = 0;
    goto LAB_100d9d84;
  case 0x1b:
    uVar6 = (DAT_100d9e64 - DAT_100d9e60) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100d9e68 | uVar6,DAT_100d9e70,DAT_100d9e6c);
    iVar1 = FUN_1013650a();
    if ((*(int *)(param_1 + 8) == iVar1) ||
       (iVar1 = FUN_100d5dd0(*(int *)(param_1 + 8)), iVar1 == 3)) {
      FUN_100d93ac(*(undefined4 *)(param_1 + 8),3,0);
    }
    uVar5 = *(undefined4 *)(param_1 + 8);
    puVar2 = (undefined1 *)FUN_10136428(uVar5);
    FUN_10119ddc(&local_2c,0x12,DAT_100d9e74,puVar2[5],puVar2[4],puVar2[3],puVar2[2],puVar2[1],
                 *puVar2);
    FUN_100a5b78(DAT_100d9e78 | uVar6,DAT_100d9e80,DAT_100d9e7c,uVar5,&local_2c);
    FUN_100d93ac(uVar5,1,0);
    uVar5 = 0xc9;
    iVar8 = *(int *)(param_1 + 8);
    cVar4 = *(char *)(param_1 + 3);
LAB_100d9bea:
    FUN_100d4440(uVar5,cVar4,iVar8);
    return 0;
  case 0x1c:
    uVar3 = 2;
    goto LAB_100d9d82;
  case 0x1d:
    uVar3 = 4;
    goto LAB_100d9d82;
  case 0x1e:
    uVar3 = 3;
    goto LAB_100d9d82;
  case 0x1f:
    uVar3 = 5;
LAB_100d9d82:
    uVar5 = *(undefined4 *)(param_1 + 8);
LAB_100d9d84:
    FUN_100d93ac(uVar5,uVar3,0);
    break;
  case 0x20:
    uVar5 = *(undefined4 *)(param_1 + 8);
    uVar3 = FUN_1013651a();
    FUN_100d93ac(uVar3,5,0);
    FUN_100d4e5c(uVar5,&local_2f,&local_2e,0);
    local_2c = local_2f;
    local_2b = (char)local_2e;
    local_2a = FUN_100d4f08(uVar5);
    FUN_100d93ac(uVar5,7,&local_2c,3);
    uVar3 = 4;
    goto LAB_100d9d84;
  case 0x21:
    uVar6 = *(uint *)(param_1 + 8);
    iVar1 = FUN_1013650a();
    if ((int)((uint)*(byte *)(*DAT_100d9f14 + 0x31) << 0x1f) < 0) {
      if (iVar1 == 0) {
        FUN_100d47a4(DAT_100d9f18,uVar6 & 0xffff);
        return 0;
      }
    }
    else if (iVar1 == 0) {
      return 0;
    }
    FUN_10131ff2(iVar1,uVar6 & 0xffff);
    break;
  default:
    FUN_100a5b78((DAT_100d9b1c - DAT_100d9b18) * 0x20 & 0xff00U | 0x2c40031,DAT_100d9b28,
                 DAT_100d9b40);
    FUN_100d95ec(*(undefined4 *)(param_1 + 8));
  }
  return 0;
}

