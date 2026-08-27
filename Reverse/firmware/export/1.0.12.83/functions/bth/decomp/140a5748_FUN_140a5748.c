/* FUN_140a5748 @ 0x140a5748 */

void FUN_140a5748(void)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar2 = DAT_140a57dc;
  cVar1 = *(char *)((int)DAT_140a57dc + 0x42);
  *DAT_140a57e0 = 0;
  if (cVar1 == '\0') {
    uVar4 = FUN_140e5a48(0xffff,0,0);
    *puVar2 = uVar4;
    uVar4 = FUN_140e5a48(0xffff,0,0);
    puVar2[1] = uVar4;
    uVar5 = FUN_140e5a48(0xffff,0,0);
    uVar4 = DAT_140a57e4;
    puVar2[2] = uVar5;
    *(undefined1 *)((int)puVar2 + 0x42) = 1;
    *(undefined2 *)(puVar2 + 0xf) = 0x800;
    puVar2[0xd] = uVar4;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined2 *)(puVar2 + 0x10) = 0;
    puVar2[3] = 0;
    FUN_140a4b80(puVar2 + 3);
    piVar3 = DAT_140a57ec;
    uVar4 = DAT_140a57e8;
    puVar2[8] = 0;
    puVar2[0xe] = uVar4;
    *(undefined2 *)((int)puVar2 + 0x3e) = 0x5000;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    FUN_140a4b80();
    if (*piVar3 == 0) {
      iVar6 = FUN_140e5418(DAT_140a57f0);
      *piVar3 = iVar6;
      return;
    }
  }
  return;
}

