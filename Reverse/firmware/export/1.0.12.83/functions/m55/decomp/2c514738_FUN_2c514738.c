/* FUN_2c514738 @ 0x2c514738 */

void FUN_2c514738(int param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_1c;
  
  uVar11 = *(undefined4 *)(param_1 + 0xc);
  uVar12 = *(undefined4 *)(param_1 + 0x24);
  uVar4 = FUN_2c5115bc(uVar11);
  pbVar5 = (byte *)FUN_2c5115d4(uVar11,uVar4);
  iVar6 = FUN_2c5115bc(*(undefined4 *)(param_1 + 0xc));
  if (iVar6 == 2) {
    pcVar8 = (char *)FUN_2c5115d4(*(undefined4 *)(param_1 + 0xc),2);
    cVar1 = *pcVar8;
    uVar4 = DAT_2c5149ac;
    if (cVar1 == '\x01') {
      uVar10 = (uint)(byte)(pcVar8[1] - 2);
      if (uVar10 < 2) {
        uVar11 = DAT_2c5149a4;
        if (pcVar8[1] == '\x03') {
LAB_2c514958:
          uVar4 = registry_lookup(DAT_2c5149b8);
          FUN_2c638730(uVar12,uVar4);
          return;
        }
LAB_2c514904:
        local_1c = registry_lookup(uVar11);
        uVar4 = registry_lookup(DAT_2c5149ac);
        uVar7 = DAT_2c5149b4;
        goto LAB_2c5147d6;
      }
    }
    else {
      cVar2 = pcVar8[1];
      uVar9 = (uint)(byte)(cVar1 - 2);
      if (uVar9 < 2) {
        if (cVar2 == '\x01') {
          uVar4 = DAT_2c5149a4;
          if (cVar1 == '\x03') goto LAB_2c514958;
LAB_2c51492a:
          local_1c = registry_lookup(uVar4);
          uVar4 = registry_lookup(DAT_2c5149b4);
          uVar7 = DAT_2c5149ac;
          goto LAB_2c5147d6;
        }
      }
      else if (0xd < uVar9) {
        uVar10 = (uint)(byte)(cVar2 - 2);
        goto LAB_2c514816;
      }
      uVar10 = (uint)(byte)(cVar2 - 2);
      uVar4 = *(undefined4 *)(DAT_2c514998 + uVar9 * 4);
    }
LAB_2c514816:
    uVar11 = DAT_2c5149a4;
    uVar7 = DAT_2c5149ac;
    if (uVar10 < 0xe) {
      uVar7 = *(undefined4 *)(DAT_2c514998 + uVar10 * 4);
    }
  }
  else {
    if (iVar6 != 3) {
      if (iVar6 != 4) {
        uVar10 = *pbVar5 - 2 & 0xff;
        uVar4 = DAT_2c5149ac;
        if (uVar10 < 0xe) {
          uVar4 = *(undefined4 *)(DAT_2c514998 + uVar10 * 4);
        }
        uVar11 = registry_lookup(DAT_2c51499c);
        uVar4 = registry_lookup(uVar4);
        FUN_2c638814(uVar12,uVar11,uVar4);
        return;
      }
      if (*(char *)(*(int *)(param_1 + 0x14) + 4) != '\0') {
        uVar10 = *pbVar5 - 2 & 0xff;
        uVar4 = DAT_2c5149ac;
        if (uVar10 < 0xe) {
          uVar4 = *(undefined4 *)(DAT_2c514998 + uVar10 * 4);
        }
        uVar11 = registry_lookup(DAT_2c5149b0);
        uVar4 = registry_lookup(uVar4);
        FUN_2c638814(uVar12,uVar11,uVar4);
        goto LAB_2c5148ce;
      }
      uVar4 = DAT_2c5149ac;
      if (*pbVar5 == 1) {
        uVar10 = pbVar5[1] - 2 & 0xff;
        if (1 < uVar10) goto LAB_2c51484e;
        local_1c = registry_lookup(DAT_2c5149a8);
        uVar4 = registry_lookup(DAT_2c5149ac);
        uVar11 = DAT_2c5149b4;
      }
      else {
        uVar9 = (uint)(byte)(*pbVar5 - 2);
        bVar3 = pbVar5[1];
        if (uVar9 < 2) {
          if (bVar3 == 1) {
            local_1c = registry_lookup(DAT_2c5149a8);
            uVar4 = registry_lookup(DAT_2c5149b4);
            uVar11 = DAT_2c5149ac;
            goto LAB_2c51486c;
          }
        }
        else if (0xd < uVar9) {
          uVar10 = (uint)(byte)(bVar3 - 2);
          goto LAB_2c51484e;
        }
        uVar10 = (uint)(byte)(bVar3 - 2);
        uVar4 = *(undefined4 *)(DAT_2c514998 + uVar9 * 4);
LAB_2c51484e:
        uVar11 = DAT_2c5149ac;
        if (uVar10 < 0xe) {
          uVar11 = *(undefined4 *)(DAT_2c514998 + uVar10 * 4);
        }
        local_1c = registry_lookup(DAT_2c5149a8);
        uVar4 = registry_lookup(uVar4);
      }
LAB_2c51486c:
      uVar11 = registry_lookup(uVar11);
      FUN_2c638814(uVar12,local_1c,uVar4,uVar11);
LAB_2c5148ce:
      FUN_2c517580(param_1 + 0x1dc);
      return;
    }
    uVar4 = DAT_2c5149ac;
    if (*pbVar5 == 1) {
      uVar10 = pbVar5[1] - 2 & 0xff;
      uVar11 = DAT_2c5149a0;
      if (uVar10 < 2) goto LAB_2c514904;
    }
    else {
      uVar9 = (uint)(byte)(*pbVar5 - 2);
      bVar3 = pbVar5[1];
      if (uVar9 < 2) {
        uVar4 = DAT_2c5149a0;
        if (bVar3 == 1) goto LAB_2c51492a;
      }
      else if (0xd < uVar9) {
        uVar10 = (uint)(byte)(bVar3 - 2);
        goto LAB_2c5147b8;
      }
      uVar10 = (uint)(byte)(bVar3 - 2);
      uVar4 = *(undefined4 *)(DAT_2c514998 + uVar9 * 4);
    }
LAB_2c5147b8:
    uVar11 = DAT_2c5149a0;
    uVar7 = DAT_2c5149ac;
    if (uVar10 < 0xe) {
      uVar7 = *(undefined4 *)(DAT_2c514998 + uVar10 * 4);
    }
  }
  local_1c = registry_lookup(uVar11);
  uVar4 = registry_lookup(uVar4);
LAB_2c5147d6:
  uVar11 = registry_lookup(uVar7);
  FUN_2c638814(uVar12,local_1c,uVar4,uVar11);
  return;
}

