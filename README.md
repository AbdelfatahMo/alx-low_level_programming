# Welcome to ALX C programming
# Technical Questions:-
## Q1: Using Python and XML-RPC, write a simple script to log in and access user's invoices.
'''
import xmlrpc.client

def user_invoices(url, db, username, password) -> list:
    # Logging in and Authentication
    common = xmlrpc.client.ServerProxy('{}/xmlrpc/2/common'.format(url))
    # Return authenticated user id
    uid = common.authenticate(db, username, password, {})

    if uid:
        models = xmlrpc.client.ServerProxy('{}/xmlrpc/2/object'.format(url))

        invoices = models.execute_kw(db, uid, password, 'account.move', 'search', 
                                    [[['invoice_user_id', '=', uid]]])

        records = models.execute_kw(db, uid, password, 'account.move', 'read',
                                    [invoices], {'fields': ['partner_id', 'invoice_date']})
        return(records)
    else:
        raise Exception("Failure login")

# Connection parameters
url = "http://127.0.0.1:8069"
db = "odoo16"
username = 'admin'
password = 'admin'

print(user_invoices(url, db, username, password))
'''
