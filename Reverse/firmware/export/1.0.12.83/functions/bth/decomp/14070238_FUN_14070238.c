/* FUN_14070238 @ 0x14070238 */

undefined4 FUN_14070238(undefined4 param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  undefined4 local_20;
  int local_1c;
  
  local_1c = *DAT_140704c8;
  uVar2 = *param_2;
  if (0x104 < uVar2) {
    if (uVar2 == 0x200) {
      iVar4 = FUN_14073468(&local_20,0,param_2[4]);
      if (iVar4 == 0) {
        iVar4 = FUN_1407393c(local_20,param_2 + 5,param_2[4]);
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x42,DAT_140704d4,0x2c8,DAT_140704e0);
        }
        iVar4 = FUN_140711d0((char)param_2[2],param_2[1],*(undefined1 *)((int)param_2 + 5),
                             (char)param_2[3],local_20);
        FUN_140735a8(local_20);
        if (iVar4 == 0) goto LAB_140702e2;
      }
      else {
        iVar4 = 0x4b;
      }
LAB_14070288:
      puVar3 = (ushort *)FUN_14074378(0xa01,param_4,1,8);
      if (puVar3 != (ushort *)0x0) {
        *puVar3 = *param_2;
        puVar3[1] = param_2[1];
        *(char *)(puVar3 + 3) = (char)param_2[2];
        uVar1 = *(undefined1 *)((int)param_2 + 5);
        puVar3[2] = (ushort)iVar4;
        *(undefined1 *)((int)puVar3 + 7) = uVar1;
        FUN_140743d0();
      }
      goto LAB_140702e2;
    }
LAB_140703bc:
    puVar3 = (ushort *)FUN_14074378(0xa01,param_4,1,6);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *param_2;
      uVar2 = param_2[1];
      puVar3[2] = 0x42;
      puVar3[1] = uVar2;
      FUN_140743d0();
    }
    goto LAB_140702e2;
  }
  if (uVar2 < 0x100) goto LAB_140703bc;
  switch(uVar2) {
  case 0x101:
    iVar4 = FUN_1406fab8(param_2[2]);
    goto LAB_14070336;
  case 0x102:
    iVar4 = FUN_1406faf0((char)param_2[2],param_2[1],param_2[3],*(undefined1 *)((int)param_2 + 5),
                         param_2[4],DAT_140704d8);
    if (iVar4 != 0) {
      puVar3 = (ushort *)FUN_14074378(0xa01,param_4,1,8);
      if (puVar3 != (ushort *)0x0) {
        *puVar3 = *param_2;
        puVar3[1] = param_2[1];
        uVar2 = param_2[2];
        puVar3[2] = (ushort)iVar4;
        *(char *)(puVar3 + 3) = (char)uVar2;
        *(undefined1 *)((int)puVar3 + 7) = 0;
        FUN_140743d0();
      }
      goto LAB_140702e2;
    }
    iVar4 = *(int *)(DAT_140704cc + ((byte)param_2[2] + 6) * 4);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_140704d4,0x238,DAT_140704dc);
    }
    iVar4 = *(int *)(iVar4 + 4);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_140704d4,0x23c,DAT_140704dc);
    }
    break;
  case 0x103:
    iVar4 = FUN_1406fcb4((char)param_2[2],param_2[1],param_2[3],(char)param_2[4],(int)param_2 + 9);
    if (iVar4 != 0) {
      puVar3 = (ushort *)FUN_14074378(0xa01,param_4,1,8);
      if (puVar3 != (ushort *)0x0) {
        *puVar3 = *param_2;
        puVar3[1] = param_2[1];
        uVar2 = param_2[2];
        puVar3[2] = (ushort)iVar4;
        *(char *)(puVar3 + 3) = (char)uVar2;
        FUN_140743d0();
      }
      goto LAB_140702e2;
    }
    iVar4 = *(int *)(DAT_140704cc + ((byte)param_2[2] + 6) * 4);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_140704d4,0x277,DAT_140704e4);
    }
    iVar4 = *(int *)(iVar4 + 4);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_140704d4,0x27b,DAT_140704e4);
    }
    break;
  case 0x104:
    iVar4 = FUN_1406fdd4((char)param_2[2],param_2[1],*(undefined1 *)((int)param_2 + 5));
    if (iVar4 != 0) goto LAB_14070288;
    iVar4 = *(int *)(DAT_140704cc + ((byte)param_2[2] + 6) * 4);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_140704d4,0x2a6,DAT_140704d0);
    }
    iVar4 = *(int *)(iVar4 + 4);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_140704d4,0x2aa,DAT_140704d0);
    }
    break;
  default:
    iVar4 = FUN_1406fa5c(param_2[2],(char)param_2[3],DAT_140704e8);
    if (iVar4 == 0) {
      iVar5 = FUN_1406f8dc(param_2[2]);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x42,DAT_140704d4,0x20e,DAT_140704ec);
      }
      *(short *)(iVar5 + 8) = (short)param_4;
    }
LAB_14070336:
    puVar3 = (ushort *)FUN_14074378(0xa01,param_4,1,6);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *param_2;
      uVar2 = param_2[1];
      puVar3[2] = (ushort)iVar4;
      puVar3[1] = uVar2;
      FUN_140743d0();
    }
    goto LAB_140702e2;
  }
  *(short *)(iVar4 + 10) = (short)param_4;
LAB_140702e2:
  if (*DAT_140704c8 != local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return 0;
}

