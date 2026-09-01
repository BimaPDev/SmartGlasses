/* FUN_10026978 @ 0x10026978 */

void FUN_10026978(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint unaff_r5;
  undefined8 uVar6;
  
  iVar3 = *DAT_100269c8;
  iVar4 = *DAT_100269cc;
  if (iVar4 == 0) {
LAB_100269b8:
    if (*DAT_100269c8 == iVar3) {
      return;
    }
  }
  else {
    if (*(char *)(DAT_100269d0 + 0xe0) == '\x03') goto LAB_100269b8;
    *(undefined1 *)(DAT_100269d0 + 0xe0) = 3;
    *(undefined4 *)(iVar4 + 0x1bc) = 0;
    if (*DAT_100269c8 == iVar3) goto LAB_10026700;
  }
  FUN_1013cdc0();
LAB_10026700:
  iVar3 = *DAT_10026838;
  puVar5 = (undefined4 *)*DAT_1002683c;
  if (puVar5 == (undefined4 *)0x0) goto LAB_10026828;
  bVar1 = *(byte *)(DAT_10026840 + 0xe0);
  unaff_r5 = (uint)bVar1;
  (**(code **)(DAT_10026844 + 0x10))();
  if (*(byte *)((int)puVar5 + 0x371) == unaff_r5) goto LAB_10026768;
  *(byte *)((int)puVar5 + 0x371) = bVar1;
  FUN_10124cea(puVar5[1],1);
  FUN_10124cea(puVar5[6],1);
  FUN_10124cea(puVar5[10],1);
  if (unaff_r5 != 1) goto LAB_10026790;
  if (puVar5[0xda] != 0) {
    FUN_101245ce(*puVar5);
    FUN_1012458c(puVar5[0xda],1);
  }
  uVar2 = puVar5[1];
LAB_10026764:
  do {
    FUN_10124c20(uVar2,1);
LAB_10026768:
    do {
      if (puVar5[2] != 0) {
        FUN_10097998(puVar5[2],DAT_10026848);
      }
      if (puVar5[7] != 0) {
        FUN_10097998(puVar5[7],DAT_10026848);
      }
      if (puVar5[0xb] == 0) {
LAB_10026828:
        if (*DAT_10026838 == iVar3) {
          return;
        }
      }
      else if (*DAT_10026838 == iVar3) {
        FUN_10097998(puVar5[0xb],DAT_10026848);
        return;
      }
      FUN_1013cdc0();
LAB_10026790:
      if (unaff_r5 == 2) {
        if (puVar5[0xda] != 0) {
          FUN_101245ce(*puVar5);
          FUN_1012458c(puVar5[0xda],1);
        }
        FUN_10052c38(7,2,0);
        uVar2 = puVar5[6];
        goto LAB_10026764;
      }
    } while (unaff_r5 != 3);
    if (puVar5[0xda] != 0) {
      FUN_101245ce(*puVar5);
      FUN_1012458c(puVar5[0xda],1);
    }
    if (puVar5[100] == 0) {
      uVar2 = FUN_10094a1c(DAT_1002684c,300,puVar5);
      puVar5[100] = uVar2;
    }
    if (puVar5[0x6f] == 0) {
      FUN_10097aec(puVar5[0xc],DAT_10026850,0);
      uVar6 = thunk_FUN_10115958();
      uVar2 = FUN_10004198((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
      puVar5[0x6f] = uVar2;
    }
    else {
      FUN_1002660c(puVar5[100]);
    }
    uVar2 = puVar5[10];
  } while( true );
}

