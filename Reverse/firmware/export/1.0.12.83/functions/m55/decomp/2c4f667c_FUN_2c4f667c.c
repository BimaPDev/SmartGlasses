/* FUN_2c4f667c @ 0x2c4f667c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f667c(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_r3;
  
  puVar3 = _DAT_2c4f6714;
  puVar2 = _LAB_2c4f6710;
  cVar1 = *(char *)((int)_LAB_2c4f6710 + 0x42);
  *_DAT_2c4f6714 = 0;
  if (cVar1 == '\0') {
    uVar5 = FUN_2c647174(0xffff,0,0,puVar3,in_r3);
    *puVar2 = uVar5;
    uVar5 = FUN_2c647174(0xffff,0,0);
    puVar2[1] = uVar5;
    uVar6 = FUN_2c647174(0xffff,0,0);
    uVar5 = _LAB_2c4f6718;
    *(undefined1 *)((int)puVar2 + 0x42) = 1;
    puVar2[2] = uVar6;
    *(undefined2 *)(puVar2 + 0x10) = 0;
    puVar2[0xd] = uVar5;
    puVar2[7] = 0;
    *(undefined2 *)(puVar2 + 0xf) = 0x800;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    func_0x2c4f6954(puVar2 + 3);
    uVar5 = _LAB_2c4f671c;
    puVar2[8] = 0;
    puVar2[0xe] = uVar5;
    *(undefined2 *)((int)puVar2 + 0x3e) = 60000;
    puVar2[9] = 0;
    puVar2[0xc] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    piVar4 = _LAB_2c4f6720;
    func_0x2c4f6954();
    if (*piVar4 == 0) {
      iVar7 = FUN_2c6440f0(_LAB_2c4f6724);
      *piVar4 = iVar7;
      return;
    }
  }
  return;
}

