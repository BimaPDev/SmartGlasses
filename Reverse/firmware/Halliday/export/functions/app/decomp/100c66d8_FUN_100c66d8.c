/* FUN_100c66d8 @ 0x100c66d8 */

undefined4 FUN_100c66d8(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char cVar8;
  undefined4 *puVar9;
  
  iVar1 = FUN_100c5d4c(param_1,0x20,param_3,param_4,param_1,param_2,param_3);
  if (iVar1 == 0) {
    return 0xffffff97;
  }
  puVar2 = (undefined1 *)FUN_100c1fe4(iVar1 + 8,0x20);
  FUN_1011ea48(puVar2,0,0x20);
  puVar9 = param_2 + param_3 * 2;
  uVar6 = 0;
  do {
    pcVar7 = (char *)*param_2;
    for (uVar5 = 0; uVar5 < (uint)param_2[1]; uVar5 = uVar5 + 1) {
      uVar4 = (uint)(byte)pcVar7[1];
      cVar8 = *pcVar7;
      if (0x1f < uVar4 + uVar6 + 2) {
        uVar4 = 0x1d - uVar6;
        if ((cVar8 != '\t') || ((int)uVar4 < 1)) {
          FUN_100a5b78(DAT_100c67bc | (DAT_100c67b8 - DAT_100c67b4) * 0x20 & 0xff00U,DAT_100c67c4,
                       DAT_100c67c0);
          FUN_100c1c90(iVar1);
          return 0xffffffea;
        }
        cVar8 = '\b';
      }
      puVar2[uVar6 + 1] = (char)uVar4 + '\x01';
      puVar2[(uVar6 + 1 & 0xff) + 1] = cVar8;
      FUN_1011ea40(puVar2 + (uVar6 + 2 & 0xff) + 1,*(undefined4 *)(pcVar7 + 4));
      uVar6 = uVar6 + (uVar4 & 0xff) + 2 & 0xff;
      pcVar7 = pcVar7 + 8;
    }
    param_2 = param_2 + 2;
    if (param_2 == puVar9) {
      *puVar2 = (char)uVar6;
      uVar3 = FUN_100c5e48(param_1,iVar1,0);
      return uVar3;
    }
  } while( true );
}

