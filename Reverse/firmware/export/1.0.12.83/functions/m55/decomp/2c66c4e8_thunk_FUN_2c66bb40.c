/* thunk_FUN_2c66bb40 @ 0x2c66c4e8 */

/* WARNING: Control flow encountered bad instruction data */

uint thunk_FUN_2c66bb40(int param_1,int param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  byte *apbStack_48 [9];
  
  uVar2 = 0;
  while( true ) {
    cVar1 = *param_3;
    if (cVar1 == '\0') {
      if (param_2 != 0) {
        *(undefined1 *)(param_1 + uVar2) = 0;
      }
      return uVar2;
    }
    if (cVar1 == '%') break;
    if (param_2 - 1U <= uVar2) {
      return 0;
    }
    *(char *)(param_1 + uVar2) = cVar1;
    param_3 = param_3 + 1;
    uVar2 = uVar2 + 1;
  }
  if ((param_3[1] == '0') || (param_3[1] == '+')) {
    pbVar3 = (byte *)(param_3 + 2);
  }
  else {
    pbVar3 = (byte *)(param_3 + 1);
  }
  if (*pbVar3 - 0x31 < 9) {
    FUN_2c66d654(pbVar3,apbStack_48,10);
    pbVar3 = apbStack_48[0];
  }
  if ((*pbVar3 == 0x45) || (*pbVar3 == 0x4f)) {
    pbVar3 = pbVar3 + 1;
  }
  switch(*pbVar3) {
  case 0x25:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x45:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4e:
  case 0x4f:
  case 0x51:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x66:
  case 0x69:
  case 0x6f:
  case 0x71:
  case 0x76:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x41:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x42:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x43:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x44:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x46:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x47:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x48:
  case 0x6b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x49:
  case 0x6c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x50:
  case 0x70:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x52:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x53:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x54:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x55:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x56:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x57:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x58:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x59:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x61:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x62:
  case 0x68:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 99:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 100:
  case 0x65:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x67:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x72:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x73:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x74:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x75:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x77:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x78:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x79:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return 0;
  }
}

