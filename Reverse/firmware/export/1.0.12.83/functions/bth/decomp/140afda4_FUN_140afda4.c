/* FUN_140afda4 @ 0x140afda4 */

void FUN_140afda4(uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_24;
  undefined2 local_20;
  undefined1 local_1e;
  int local_1c;
  
  uVar2 = DAT_140afe74;
  local_1c = *DAT_140afe70;
  if ((*DAT_140afe6c != '\0') && (param_1 == 0x22)) {
    FUN_1402a6e8(4,0x363,DAT_140afe84,DAT_140afe80,DAT_140afe88,DAT_140afe74,0x22);
  }
  local_20 = 0;
  local_24 = param_1 & 0xff;
  local_1e = 0;
  puVar6 = &local_24;
  puVar1 = (undefined4 *)((int)param_2 + 6);
  do {
    puVar7 = puVar1;
    puVar1 = (undefined4 *)((int)puVar7 + -1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    *(undefined1 *)puVar6 = *(undefined1 *)puVar1;
  } while (puVar1 != param_2);
  FUN_140a49fc(0x3f,&local_24,7);
  uVar3 = DAT_140afe7c;
  puVar6 = DAT_140afe78;
  *DAT_140afe78 = *puVar1;
  uVar4 = DAT_140afe80;
  *(undefined2 *)(puVar6 + 1) = *(undefined2 *)((int)puVar7 + 3);
  FUN_1402a6e8(4,0x377,DAT_140afe84,uVar4,uVar3,uVar2);
  iVar5 = FUN_140af414(puVar1);
  if (iVar5 == 0) {
    FUN_140afd4c(0xc,puVar1);
  }
  else {
    iVar5 = FUN_140af414(puVar1);
    if (iVar5 == 1) {
      FUN_140afd4c(0xd,puVar1);
    }
  }
  if (*DAT_140afe70 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

