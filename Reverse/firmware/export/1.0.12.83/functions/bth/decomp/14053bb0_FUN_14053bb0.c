/* FUN_14053bb0 @ 0x14053bb0 */

void FUN_14053bb0(int param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = DAT_14053c30;
  if (param_1 == 1) {
    iVar5 = DAT_14053c2c;
    cVar2 = '\x05';
    do {
      *(char *)(iVar5 + 0xc) = cVar2;
      cVar3 = cVar2 + '\x01';
      FUN_140746c8(cVar2,iVar5);
      iVar5 = iVar5 + 0x14;
      cVar2 = cVar3;
    } while (cVar3 != '\t');
    return;
  }
  puVar6 = DAT_14053c24 + 0x14;
  puVar4 = DAT_14053c24;
  do {
    if (param_1 == 2) {
LAB_14053be6:
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      *(undefined1 *)((int)puVar4 + 0x12) = 0xff;
      *(undefined1 *)((int)puVar4 + 0x13) = 0xff;
      *(undefined2 *)(puVar4 + 3) = 0;
      *(undefined2 *)((int)puVar4 + 0xe) = 0;
    }
    else if (param_1 == 3) {
      if (*(byte *)((int)puVar4 + 0x13) != 0xff) {
        iVar1 = (**(code **)(iVar5 + (uint)*(byte *)((int)puVar4 + 0x13) * 4))();
        (**(code **)(iVar1 + 4))(puVar4,0);
      }
      goto LAB_14053be6;
    }
    puVar4 = puVar4 + 5;
    if (puVar6 == puVar4) {
      *DAT_14053c28 = 0xffffffff;
      return;
    }
  } while( true );
}

