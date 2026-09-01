/* FUN_1001af18 @ 0x1001af18 */

void FUN_1001af18(undefined4 param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint unaff_r6;
  undefined4 uVar12;
  uint local_5c;
  char local_44;
  ushort local_43;
  char local_40;
  char local_3f;
  char local_3e;
  ushort local_3d;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = *DAT_1001b194;
  if (((int)((uint)*(byte *)(param_2 + 1) << 0x1f) < 0) &&
     (uVar4 = FUN_100a05a8(*param_2), 4 < uVar4)) {
    iVar5 = FUN_1001a6e4(*param_2,&local_40,5);
    unaff_r6 = (DAT_1001b198 - DAT_1001b19c) * 0x20 & 0xff00;
    if (iVar5 == 0) goto LAB_1001af7e;
    FUN_100a5b78(DAT_1001b1a0 | unaff_r6,DAT_1001b1a8,DAT_1001b1a4);
  }
  do {
    while( true ) {
      FUN_1001ac40(param_2);
      if (*(char *)((int)param_2 + 5) == '\0') {
        FUN_1001a934(param_2);
      }
      if (*DAT_1001b194 == local_2c) {
        return;
      }
      FUN_1013cdc0();
LAB_1001af7e:
      puVar2 = DAT_1001b1c0;
      uVar4 = DAT_1001b1b0;
      uVar12 = DAT_1001b1ac;
      if (local_40 == '\x1d') break;
LAB_1001af8c:
      uVar4 = uVar4 | unaff_r6;
LAB_1001afa4:
      FUN_100a5b78(uVar4,DAT_1001b1a8,uVar12);
LAB_1001b01e:
      FUN_100a5b78(DAT_1001b1e0 | unaff_r6,DAT_1001b1a8,DAT_1001b1e4);
      FUN_1001a7fc(*param_2,0xffffffff,500);
    }
    if (local_3e != -0x7f) {
      uVar4 = unaff_r6 | 0x3040011;
      uVar12 = DAT_1001b1b4;
      goto LAB_1001afa4;
    }
    uVar4 = DAT_1001b218;
    uVar12 = DAT_1001b214;
    if (local_3f != '\x10') goto LAB_1001af8c;
    uVar4 = DAT_1001b1b8 | unaff_r6;
    uVar9 = DAT_1001b1bc | unaff_r6;
    uVar10 = DAT_1001b1c4 | unaff_r6;
    for (local_5c = (uint)local_3d; uVar12 = *param_2, local_5c != 0;
        local_5c = local_5c + (0xfffd - uVar11) & 0xffff) {
      iVar5 = FUN_1001a6e4(uVar12,&local_44,3);
      cVar3 = local_44;
      if (iVar5 != 0) {
        uVar4 = DAT_1001b1d4 | unaff_r6;
        uVar12 = DAT_1001b1dc;
        uVar6 = DAT_1001b1d8;
LAB_1001b01a:
        FUN_100a5b78(uVar4,uVar12,uVar6);
        goto LAB_1001b01e;
      }
      uVar11 = (uint)local_43;
      if (uVar11 == 0) {
LAB_1001b09a:
        if (cVar3 != '\0') {
          if (cVar3 == '\x01') {
            if (uVar11 != 0) {
LAB_1001b144:
              uVar12 = DAT_1001b208;
              uVar7 = uVar11;
              if (0x3e < uVar11) {
                uVar7 = 0x3f;
              }
              *(undefined1 *)((int)puVar2 + uVar7) = 0;
              FUN_100a5b78(uVar4,DAT_1001b20c,uVar12,uVar11,puVar2);
              FUN_10059e18(DAT_1001b210,param_2);
              uVar12 = FUN_10059e10();
              FUN_10059314(uVar12,DAT_1001b1c0);
              FUN_10059e18(0,0);
              FUN_1001a934(param_2);
            }
          }
          else {
LAB_1001b0a2:
            FUN_100a5b78(uVar10,DAT_1001b1f8,DAT_1001b1f4);
          }
        }
        goto switchD_1001b0ee_caseD_14;
      }
      uVar7 = uVar11;
      if (0x3f < uVar11) {
        uVar7 = 0x40;
      }
      iVar5 = FUN_1001a6e4(uVar12,DAT_1001b1c0,uVar7);
      if (iVar5 != 0) {
        uVar4 = unaff_r6 | 0x1880011;
        uVar12 = DAT_1001b1ec;
        uVar6 = DAT_1001b1e8;
        goto LAB_1001b01a;
      }
      if (0x40 < uVar11) {
        FUN_100a5b78(unaff_r6 | 0x18e0023,DAT_1001b1ec,DAT_1001b1f0,cVar3,uVar11,0x40);
        iVar5 = uVar11 - 0x40;
        uVar11 = 0x40;
        FUN_1001a7fc(uVar12,iVar5,0xffffffff);
        goto LAB_1001b09a;
      }
      if (cVar3 != '\0') {
        if (cVar3 == '\x01') goto LAB_1001b144;
        goto LAB_1001b0a2;
      }
      if (uVar11 == 2) {
        uVar1 = *puVar2;
        FUN_100a5b78(uVar9,DAT_1001b200,DAT_1001b1fc,(uint)uVar1);
        if ((short)uVar1 == 1) {
          FUN_100a5b78(unaff_r6 | 0x2a80031,DAT_1001b200,DAT_1001b204);
          *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 2;
        }
        else if (uVar1 - 0x10 < 0x12) {
          switch((int)(short)uVar1) {
          case 0x10:
            uVar8 = 1;
            break;
          case 0x11:
            uVar8 = 2;
            break;
          case 0x12:
            uVar8 = 3;
            break;
          case 0x13:
            uVar8 = 4;
            break;
          default:
            goto switchD_1001b0ee_caseD_14;
          case 0x20:
            uVar8 = 0;
            break;
          case 0x21:
            uVar8 = 0xff;
          }
          *(undefined1 *)((int)param_2 + 6) = uVar8;
        }
      }
switchD_1001b0ee_caseD_14:
    }
    local_38 = DAT_1001b1c8;
    uStack_34 = DAT_1001b1cc;
    local_30 = DAT_1001b1d0;
    FUN_1001a758(uVar12,&local_38,0xc);
  } while( true );
}

