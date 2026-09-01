/* FUN_100a96ac @ 0x100a96ac */

undefined1 * FUN_100a96ac(undefined1 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined1 *local_54;
  int local_50;
  undefined2 local_48;
  undefined1 auStack_44 [2];
  undefined1 local_42;
  undefined1 **local_3c;
  undefined4 local_38;
  undefined1 *puStack_34;
  undefined1 auStack_30 [24];
  
  FUN_1011ea48(auStack_44,0,0x14);
  FUN_1012d1b8(0);
  FUN_1012d1c2();
  if ((*DAT_100a9880 == '\0') &&
     (puVar4 = (undefined1 *)FUN_100a92d4(0x10), puVar4 != (undefined1 *)0x0)) {
    if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined1 **)(param_1 + 0x38) = puVar4;
    }
    FUN_1012e0e0(auStack_30);
    param_1[1] = param_1[1] | 0xc0;
    uVar6 = DAT_100a9884;
    param_1[2] = param_1[2] & 0xfe;
    local_50 = 0;
    local_48 = 0x102;
    local_42 = 0x80;
    local_3c = &local_54;
    local_38 = DAT_100a9888;
    local_54 = param_1;
    puStack_34 = auStack_30;
    FUN_1011dbf4(uVar6,0xffffffff);
    cVar1 = param_1[3];
    if (cVar1 == '\x02') {
      uVar7 = 0x32;
    }
    else if (cVar1 == '\x03') {
      if ((byte)param_1[5] - 4 < 2) {
        uVar7 = 0x3c;
      }
      else if ((byte)param_1[5] == 0x15) {
        uVar7 = 0x3c;
      }
      else {
        uVar7 = 0x32;
      }
    }
    else {
      uVar7 = 0x28;
    }
    uVar8 = (DAT_100a9890 - DAT_100a988c) * 0x20 & 0xff00;
    FUN_100a5b78(uVar8 | 0xf30033,DAT_100a9898,DAT_100a9894,0,cVar1,uVar7);
    FUN_10084080(uVar7,DAT_100a989c);
    iVar5 = FUN_1009ece8(DAT_100a989c,auStack_44);
    if (((iVar5 != 0) && (iVar5 = FUN_1011dbde(auStack_30,0xffffffff), iVar5 == 0)) &&
       (local_50 != 0)) {
      *(int *)(puVar4 + 4) = local_50;
      uVar2 = *param_1;
      puVar4[2] = 0;
      *puVar4 = uVar2;
      puVar4[3] = uVar7;
      if (((int)((uint)(byte)param_1[1] << 0x1f) < 0) && (*DAT_100a98a0 == 0)) {
        *DAT_100a98a0 = (int)puVar4;
      }
      if (*DAT_100a98a4 == 0) {
        *DAT_100a98a4 = (int)puVar4;
      }
      *DAT_100a98a8 = *DAT_100a98a8 + 1;
      switch(param_1[3]) {
      case 2:
      case 3:
      case 4:
      case 6:
      case 0xb:
      case 0xf:
      case 0x12:
      case 0x13:
      case 0x15:
      case 0x16:
        if (*DAT_100a98ac != '\0') {
          FUN_100a9600(puVar4,0xd,0);
        }
      }
      FUN_100a9600(puVar4,0xf,*DAT_100a98b0 != '\0',0);
      pcVar3 = DAT_100a98b8;
      if (*DAT_100a98b4 == '\0') {
        uVar6 = 0x100;
      }
      else {
        uVar6 = 0x101;
      }
      FUN_100a9600(puVar4,0xf,uVar6,0);
      FUN_100a9600(puVar4,0x10,2,0);
      if (*pcVar3 == '\0') {
        FUN_1005741c(0,1);
        *pcVar3 = '\x01';
      }
      FUN_100a9314();
      FUN_100a92f4(puVar4,0x19,param_1,0x40);
      return puVar4;
    }
    FUN_100a5b78(DAT_100a98bc | uVar8,DAT_100a9898,DAT_100a98c0,0,param_1[3],uVar7);
    FUN_100840a8(uVar7,DAT_100a989c);
    FUN_100a9314();
    FUN_100a92e4(puVar4);
  }
  return (undefined1 *)0x0;
}

