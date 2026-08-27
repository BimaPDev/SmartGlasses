/* FUN_2c4ccbc0 @ 0x2c4ccbc0 */

void FUN_2c4ccbc0(int *param_1,int *param_2,undefined4 *param_3,uint param_4,uint param_5,
                 int param_6)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_6 < 2) {
    if (param_6 != 1) {
      return;
    }
    iVar3 = *param_1;
    bVar1 = 0;
    bVar4 = *(byte *)(iVar3 + 0xb4);
    bVar6 = 0;
    goto LAB_2c4ccbfa;
  }
  iVar3 = *param_1;
  iVar8 = param_1[1];
  bVar1 = *(byte *)(iVar8 + 0xb4);
  iVar7 = *(int *)(iVar3 + 0xc0);
  bVar6 = *(byte *)(iVar3 + 0xb4);
  bVar4 = bVar6;
  if (*(char *)(iVar7 + 0x563) == '\0') goto LAB_2c4ccbfa;
  if ((param_4 & 0x4300) == 0) {
    if ((*(char *)(iVar3 + 0x88) != '\0') || (*(char *)(iVar8 + 0x88) != '\0')) {
      uVar5 = 0;
      if (*(char *)(iVar3 + 0xb0) != '\0') {
        uVar11 = 0;
        do {
          uVar5 = 1 << (uVar11 & 0xff);
          if (bVar4 != 0) {
            uVar10 = 0;
            uVar9 = 0;
            do {
              while ((uVar5 & 0xff & (uint)*(byte *)(*(int *)(iVar3 + 0xc4) + uVar9 + 0x1371)) == 0)
              {
                uVar10 = uVar10 + 1;
                uVar9 = uVar10 & 0xff;
                if (*(byte *)(iVar3 + 0xb4) <= uVar9) goto LAB_2c4cce4e;
              }
              FUN_2c4d0d38(iVar3,uVar11,uVar9,0);
              iVar3 = FUN_2c4d0d28(*param_1,uVar11,uVar9);
              if ((iVar3 != 0) && (iVar3 = FUN_2c4d0d28(param_1[1],uVar11,uVar9), iVar3 != 0)) {
                iVar3 = uVar9 + *(int *)(*param_1 + 0xc4);
                *(byte *)(iVar3 + 0x1371) = (byte)uVar5 ^ *(byte *)(iVar3 + 0x1371);
              }
              iVar3 = *param_1;
              uVar10 = uVar10 + 1;
              uVar9 = uVar10 & 0xff;
            } while (uVar9 < *(byte *)(iVar3 + 0xb4));
          }
LAB_2c4cce4e:
          uVar11 = uVar11 + 1;
          uVar5 = (uint)*(byte *)(iVar3 + 0xb0);
          if ((int)uVar5 <= (int)uVar11) goto LAB_2c4cce84;
          bVar4 = *(byte *)(iVar3 + 0xb4);
        } while( true );
      }
      goto LAB_2c4ccd28;
    }
  }
  else if (*(char *)(iVar7 + 0x568) != '\x01') goto LAB_2c4ccbfa;
  uVar5 = (uint)*(byte *)(iVar3 + 0xb0);
  goto LAB_2c4ccd28;
LAB_2c4cce84:
  iVar8 = param_1[1];
  iVar7 = *(int *)(iVar3 + 0xc0);
LAB_2c4ccd28:
  puVar2 = param_3;
  if (*(char *)(iVar3 + 0xb3) == '\x02') {
    puVar2 = param_3 + 1;
  }
  FUN_2c4ce014(param_1,param_2,*(undefined4 *)(iVar3 + 0x94),*(undefined4 *)(iVar8 + 0x94),
               iVar7 + 0x100,*(int *)(iVar8 + 0xc0) + 0x100,iVar3 + 0x98,iVar8 + 0x98,*puVar2,
               iVar3 + 0xa8,uVar5,*(undefined1 *)(iVar3 + 0xb5),bVar6,bVar1,0,0,1);
  iVar3 = *param_1;
  bVar4 = *(byte *)(iVar3 + 0xb4);
  if ((((param_4 & 0x4300) == 0) && (*(char *)(*(int *)(iVar3 + 0xc0) + 0x563) == '\x01')) &&
     (param_6 == 2)) {
    puVar2 = param_3;
    if (*(char *)(iVar3 + 0xb3) == '\x02') {
      puVar2 = param_3 + 1;
    }
    FUN_2c4ce350(param_1,*puVar2,iVar3 + 0xa8,*(undefined1 *)(iVar3 + 0xb0),bVar4);
    iVar3 = *param_1;
    bVar4 = *(byte *)(iVar3 + 0xb4);
  }
LAB_2c4ccbfa:
  iVar7 = 0;
  if (bVar6 < bVar1) {
    bVar6 = bVar1;
  }
  while( true ) {
    iVar7 = iVar7 + 1;
    if ((param_6 != 1) && (*(char *)(*(int *)(*param_1 + 0xc0) + 0x563) == '\x01')) {
      bVar4 = bVar6;
    }
    if ((((param_5 & 0x40) == 0) || (*(char *)(*(int *)(iVar3 + 0xc4) + 0x13b2) == '\0')) ||
       ((*(byte *)(*param_1 + 0xb5) < bVar4 ||
        (((param_4 & 0x4300) != 0 && (*(char *)(*(int *)(*param_1 + 0xc0) + 0x568) == '\0')))))) {
      FUN_2c4cbba0(iVar3,bVar4,param_3);
    }
    if (param_6 <= iVar7) break;
    iVar3 = param_1[iVar7];
    bVar4 = *(byte *)(iVar3 + 0xb4);
  }
  iVar3 = 0;
  do {
    while (iVar7 = param_1[iVar3], *(char *)(iVar7 + 0xbd) == '\x03') {
LAB_2c4cccaa:
      iVar3 = iVar3 + 1;
      if (param_6 <= iVar3) goto LAB_2c4cccf6;
    }
    if ((param_4 & 0x4300) == 0) {
      FUN_2c4d0d20(iVar7,*(undefined4 *)(*param_1 + 0x8c),*(int *)(iVar7 + 0xc4) + 0x1170);
      if ((param_4 & 0x100) != 0) goto LAB_2c4ccc98;
LAB_2c4cccd6:
      iVar7 = *(int *)(*param_1 + 0xc0);
    }
    else {
      if ((param_4 & 0x100) == 0) goto LAB_2c4cccd6;
LAB_2c4ccc98:
      iVar7 = *(int *)(*param_1 + 0xc0);
      if ((*(char *)(iVar7 + 0x567) != '\x01') && (param_6 != 1)) goto LAB_2c4cccaa;
    }
    iVar8 = iVar3 + 1;
    FUN_2c4cca08(param_1,param_3,param_4,param_5,iVar3,*(undefined1 *)(iVar7 + 0x563));
    iVar3 = iVar8;
  } while (iVar8 < param_6);
LAB_2c4cccf6:
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    if ((param_5 & 0x40) != 0) {
      **(undefined1 **)(*param_2 + 0x38) = 0;
    }
  } while (iVar3 < param_6);
  return;
}

