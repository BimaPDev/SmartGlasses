/* FUN_100c5e48 @ 0x100c5e48 */

undefined4 FUN_100c5e48(undefined4 param_1,int param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  undefined1 auStack_40 [28];
  
  pcVar2 = DAT_100c5fdc;
  if (*DAT_100c5fdc == '\0') {
    if ((param_2 == 0) && (param_2 = FUN_100c5d4c(), param_2 == 0)) {
      return 0xffffff97;
    }
    FUN_1013ca1a(auStack_40,0,1);
    iVar5 = FUN_100c196c(param_2);
    iVar4 = DAT_100c603c;
    *(undefined1 **)(iVar5 * 0xc + DAT_100c603c + 8) = auStack_40;
    FUN_100c1d1c(param_2);
    FUN_100c1c20(DAT_100c5fe0,param_2);
    puVar3 = DAT_100c5fe4;
    *DAT_100c5fe4 = 1;
    iVar5 = FUN_1011401c(auStack_40,puVar3,10000,0);
    *DAT_100c5fe4 = 0;
    if (iVar5 == 0) {
      iVar5 = FUN_100c196c(param_2);
      cVar1 = *(char *)(iVar4 + iVar5 * 0xc);
      if (cVar1 == '\0') {
        if (param_3 != (int *)0x0) {
          *param_3 = param_2;
          return 0;
        }
        FUN_100c1c90(param_2);
        return 0;
      }
      FUN_100a5b78((DAT_100c5fec - DAT_100c5fe8) * 0x20 & 0xff00U | 0x1d40022,DAT_100c5ffc,
                   DAT_100c6038,param_1,cVar1);
      FUN_100c1c90(param_2);
      if (cVar1 != '\t') {
        return 0xfffffffb;
      }
      return 0xffffff91;
    }
    uVar8 = (DAT_100c5fec - DAT_100c5fe8) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100c5ff0 | uVar8,DAT_100c5ffc,DAT_100c5ff8,*DAT_100c5ff4);
    FUN_100a5b78(uVar8 | 0x1bc0011,DAT_100c5ffc,DAT_100c6004,*DAT_100c6000);
    FUN_100a5b78(DAT_100c600c | uVar8,DAT_100c5ffc,DAT_100c6010,*DAT_100c6008);
    FUN_100a5b78(uVar8 | 0x1be0011,DAT_100c5ffc,DAT_100c6018,*DAT_100c6014);
    FUN_100a5b78(DAT_100c6020 | uVar8,DAT_100c5ffc,DAT_100c6024,*DAT_100c601c);
    FUN_100a5b78(uVar8 | 0x1c00012,DAT_100c5ffc,DAT_100c6028,param_1,iVar5);
    iVar6 = FUN_100c196c(param_2);
    *(undefined4 *)(iVar6 * 0xc + iVar4 + 8) = 0;
    FUN_100c1c90(param_2);
    thunk_FUN_10113fd0(DAT_100c602c);
    if (*pcVar2 == '\0') {
      pcVar7 = (code *)*DAT_100c6030;
      *pcVar2 = '\x01';
      (*pcVar7)(iVar5);
      FUN_10119dc2(DAT_100c6034,0x1ca);
    }
  }
  else if (param_2 != 0) {
    FUN_100c1c90(param_2);
  }
  return 0xfffffffb;
}

