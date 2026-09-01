/* FUN_1000ba4c @ 0x1000ba4c */

void FUN_1000ba4c(int param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_2c [2];
  undefined2 uStack_22;
  undefined2 local_20 [2];
  int local_1c;
  
  local_1c = *DAT_1000baa8;
  puVar2 = local_2c;
  puVar6 = DAT_1000baac;
  do {
    puVar5 = puVar6;
    puVar4 = puVar2;
    uVar3 = puVar5[1];
    puVar6 = puVar5 + 2;
    *puVar4 = *puVar5;
    puVar4[1] = uVar3;
    puVar2 = puVar4 + 2;
  } while (puVar6 != DAT_1000baac + 2);
  uVar1 = *(undefined2 *)(puVar5 + 3);
  puVar4[2] = *puVar6;
  *(undefined2 *)(puVar4 + 3) = uVar1;
  uStack_22 = *(undefined2 *)(param_1 + 10);
  local_20[0] = *(undefined2 *)(param_1 + 0xc);
  FUN_1000b89c(param_1,local_2c,0xe,0x72);
  if (*DAT_1000baa8 != local_1c) {
    FUN_1013cdc0();
  }
  return;
}

