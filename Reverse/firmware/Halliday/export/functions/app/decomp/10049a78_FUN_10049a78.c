/* FUN_10049a78 @ 0x10049a78 */

void FUN_10049a78(void)

{
  int iVar1;
  byte *extraout_r2;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint extraout_r3;
  undefined *puVar5;
  
  pbVar2 = DAT_10049b80;
  iVar1 = DAT_10049b7c;
  iVar3 = *DAT_10049b74;
  puVar5 = (undefined *)*DAT_10049b78;
  if (puVar5 == (undefined *)0x0) goto LAB_10049b66;
  uVar4 = (uint)*(ushort *)(puVar5 + 0x3b0);
  if ((*(int *)(puVar5 + 0x3b0) == *(int *)(DAT_10049b7c + 0x3b0)) && (1 < *DAT_10049b80 - 1))
  goto LAB_10049b3a;
  FUN_100a5b78(DAT_10049b8c | (DAT_10049b88 - DAT_10049b84) * 0x20 & 0xff00U,
               PTR_s_guide_step_pd_adjust_10049b94,PTR_s_guide_step_pd_adjust__xy__d__d___10049b90,
               uVar4,*(undefined2 *)(puVar5 + 0x3b2),*(undefined2 *)(DAT_10049b7c + 0x3b0),
               *(undefined2 *)(DAT_10049b7c + 0x3b2),(uint)*DAT_10049b80);
  *pbVar2 = *pbVar2 + 1;
  *(undefined2 *)(puVar5 + 0x3b0) = *(undefined2 *)(iVar1 + 0x3b0);
  *(undefined2 *)(puVar5 + 0x3b2) = *(undefined2 *)(iVar1 + 0x3b2);
  FUN_10124c20(*(undefined4 *)(puVar5 + 0x3b8),1);
  FUN_10124cea(*(undefined4 *)(puVar5 + 0x3bc),1);
  FUN_10089bf8(*(undefined4 *)(puVar5 + 0x390));
  do {
    puVar5 = PTR_DAT_10049b98;
    iVar1 = (**(code **)PTR_DAT_10049b98)();
    if (iVar1 == 6) {
      FUN_100a5b78(DAT_10049b9c | (DAT_10049b88 - DAT_10049b84) * 0x20 & 0xff00U,
                   PTR_s_guide_step_pd_adjust_10049b94,DAT_10049ba0);
      if (*DAT_10049b74 == iVar3) {
        (**(code **)(puVar5 + 0x18))();
        return;
      }
    }
    else {
LAB_10049b66:
      if (*DAT_10049b74 == iVar3) {
        return;
      }
    }
    FUN_1013cdc0();
    pbVar2 = extraout_r2;
    uVar4 = extraout_r3;
LAB_10049b3a:
    *pbVar2 = 0;
    FUN_1003f838(uVar4);
    FUN_10124cea(*(undefined4 *)(puVar5 + 0x3b8),1);
    FUN_10124c20(*(undefined4 *)(puVar5 + 0x3bc),1);
  } while( true );
}

